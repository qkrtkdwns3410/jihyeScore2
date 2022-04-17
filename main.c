#include <stdio.h>
/*
 *
 *
 *
 *
 * */
int main() {
    int scores[7][5];
    int korean_sum = 0;
    int math_sum = 0;
    int engligh_sum = 0;
    
    printf("학생 성적을 입력 하세요 (5명의 학생 자료)\n");
    for (int i = 0; i < 5; i++) {
        printf("%d번(국어, 영어, 수학) : ",i+1);
        scanf("%d %d %d", &scores[i][0], &scores[i][1], &scores[i][2]);
        int total_score = scores[i][0] + scores[i][1] + scores[i][2];
        
        int korean_score = scores[i][0];
        int english_score = scores[i][1];
        int math_score = scores[i][2];
        
        korean_sum += korean_score;
        engligh_sum += english_score;
        math_sum += math_score;
        
        scores[i][3] = total_score;
    }
    scores[5][0] = korean_sum;
    scores[5][1] = engligh_sum;
    scores[5][2] = math_sum;
    scores[5][3] = korean_sum + engligh_sum + math_sum;
    
    scores[6][0] = korean_sum / 5;
    scores[6][1] = engligh_sum / 5;
    scores[6][2] = math_sum / 5;
    scores[6][3] = scores[5][3] / 5;
    
    printf("===============================================\n");
    printf("        번호          국어              영어         수학           총점      \n");
    printf("===============================================\n");
    for (int i = 0; i < 5; i++) {
        printf("        %d             %d              %d               %d           %d      \n",i+1,scores[i][0],scores[i][1],scores[i][2],scores[i][3]);
    }
    printf("===============================================\n");
    printf("    과목총점       %d       %d         %d          %d      \n",scores[5][0],scores[5][1],scores[5][2],scores[5][3]);
    printf("===============================================\n");
    printf("     과목평균       %d        %d           %d             %d      \n",scores[6][0],scores[6][1],scores[6][2],scores[6][3]);
    printf("===============================================\n");
    
    
    return 0;
}
