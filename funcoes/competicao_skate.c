#include <stdio.h>
#include <stdbool.h>


int calculoScore(int score1, int score2,int score3){  
     if ((score1>score2)&& (score1>score3)&& (score2>=score3)){
        return score2;
     }else if ((score1>score2)&& (score1>score3)&& (score3>score2)){
        return score3;
     }else if ((score2>score3)&&(score2>score1)&&(score1>=score3) )
     {
        return score1;
     }else if ((score2>score3)&&(score2>score1)&&(score3>=score1) )
     {
        return score3;
     }else if ((score3>score1)&&(score3>score2)&&(score2>=score1))
     {
       return score2;
    }else if ((score3>score1)&&(score3>score2)&&(score1>=score2))
     {
       return score1;
     }else if ((score1 == score2) && (score2 == score3)) {
        return score1; 
    } else if ((score1 == score2) && (score2 > score3)) {
        return score1; 
    } else if ((score1 == score3) && (score3 > score2)) {
        return score1;
    } else if ((score2 == score3) && (score3 > score1)) {
        return score3;
            
}

}

int main(){
    int scores_a[9],scores_b[9];
    for (int i = 0; i < 9; i++)
    {
        scanf("%d",&scores_a[i]);
    }

        for (int j = 0; j < 9; j++)
    {
        scanf("%d",&scores_b[j]);
    }

    int scores_dia_a[3], scores_dia_b[3];
    for (int k = 0; k < 3; k++)
    {
        scores_dia_a[k]=calculoScore(scores_a[3*k],scores_a[3*k+1],scores_a[3*k+2]);
        scores_dia_b[k]=calculoScore(scores_b[3*k],scores_b[3*k+1],scores_b[3*k+2]);
    }

    int score_a, score_b;
  
    score_a = calculoScore(scores_dia_a[0], scores_dia_a[1],scores_dia_a[2]);
    score_b = calculoScore(scores_dia_b[0], scores_dia_b[1],scores_dia_b[2]);


    if (score_a>score_b)
    {
        printf("A");
    }else if (score_b>score_a)
    {
        printf("B");
    }else if (score_a==score_b)
    {
        printf("empate");
    }
    
    return 0;
}
