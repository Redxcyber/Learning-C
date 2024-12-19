#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int height=25, width=25; //rectangle area
int x, y; //position of snake's head 
int fruitX, fruitY; //position of fruit
int score;
int gameOver;
int flag = 0;
int tailX[100], tailY[100], countTail=0;

//set initial position of snake and fruit
void setup(){
    score = 0; //initial value of score
    gameOver = 0; //if game over then it will become 1

    x = width/2;
    y = height/2;

    label1 :
    fruitX = rand() % width;
    if(fruitX==0 || fruitX==width-1 || fruitX==height-1){
        goto label1;
    }

    label2 :
    fruitY = rand() % height;
    if(fruitY==0 || fruitY==width-1 || fruitY==height-1){
        goto label2;
    }

}

//draw outer boundaries
void draw(){
    system("cls");
    for(int i=0; i<width; i++){
        for(int j=0; j<height; j++){
            if(i==0 || i==height-1 || j==0 || j==width-1){
                printf("* ");
                
            }else{
                if(i==x && j==y){
                    printf("O "); //snake
                }
                else if(i==fruitX && j==fruitY){
                    printf("F "); //fruit
                }
                else{
                    int ch = 0;
                    for(int k=0; k<countTail; k++){
                        if(i==tailX[k] && j==tailY[k]){
                            printf("o ");
                            ch=1;
                        }
                    }
                    if(ch==0){
                        printf("  ");
                    }
                }
            }
        }
        printf("\n");
    }
}


//capture snake's direction according to key pressed
void input(){
    if(kbhit()){
        switch(getch()){
            case 'a' :
                flag = 1;
                break;
            case 'd' :
                flag = 2;
                break;
            case 'w' :
                flag = 3;
                break;
            case 's' :
                flag = 4;
                break;
            case 'x' :
                gameOver = 1;
                break;
        }
    }

}

void makeLogic(){
        //length of snake and its body movement
        int prevX = tailX[0];
        int prevY = tailY[0];
        int prev2X, prev2Y;
        tailX[0] = x;
        tailY[0] = y;
        for(int i=1; i<countTail; i++){
            prev2X = tailX[i];
            prev2Y = tailY[i];
            tailX[i] = prevX;
            tailY[i] = prevY;
            prevX = prev2X;
            prevY = prev2Y;


        }

    //move snake according to the key pressed
    switch(flag){
        case 1 :
            y--;
            break;
        case 2 :
            y++;
            break;
        case 3 :
            x--;
            break;
        case 4 :
            x++;
            break;
        default : 
            break;

    }

    //game over if snake collide with boundaries
    if(x<0 || x>width || y<0 || y>height){
        gameOver = 1;
    }

    //if snake eat fruit then regenerate new fruit and vanish old fruit
    if(x==fruitX && y==fruitY){
        label3 :
        fruitX = rand() % width;
        if(fruitX==0){
            goto label3;
        }

        label4 :
        fruitY = rand() % height;
        if(fruitY==0){
            goto label4;
        }

        //increse score when snake eat fruit
        score += 10;

        //increse tail count when snake eat fruit
        countTail++;

    }

}


int main(){
    char choice;
    do{
        setup();
        while(!gameOver){ //gameOver != 1
            draw();
            input();
            makeLogic();
            for(int m=0; m<100000; m++){
                for(int n=0; n<10000; n++){
                    
                }
            }

        }
        printf("\n\n\n Press y to play again : ");
        scanf(" %c",&choice);
        

    }while(choice=='y' || choice=='Y');

    printf("\n\nYOUR SCORE : %d",score);
    return 0;
}