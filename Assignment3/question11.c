// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.
 #include<stdio.h>
 
 int main(){
    float maths,science,computer,english,hindi,total_marks,percentage;
    printf("Enter the marks of each subjects :\n");
    
    scanf("%f %f %f %f %f",&maths,&science,&computer,&english,&hindi);
    total_marks = maths+science+computer+english+hindi;
    printf("Total Marks is %f \n",total_marks);
    percentage = (total_marks/500)*100;
    printf("Percentage is %f \n",percentage);
    return 0;
 }