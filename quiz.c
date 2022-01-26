#include <stdio.h>
#include <ctype.h>
int main(){
 char questions[][100]= {"1.What year did C language debut?: ",
 "2.Who is the founder of C language?: ",
 "3.What is the capital of India?: ",
 "4.What is the predecessor of C?: ",
 "5.Which is the longest river in the world?: ",
 "6.Who invented the light bulb?: ",
 "7.Who is known as the Iron man of India?: ",
 "8. What is the name of the mars rover which recently landed on the red planet?:",
 "9.Which among the following rulers was defeated by Seleucus?:",
 "10.In the third battle of Panipat, who defeated the Marathas?:", };


 char options[][100]={"A.1969", "B.1972", "C.1970", "D.1980",
 "A.Dennis Ritchie", "B.Nikola Tesla", "C.John Brown", "D.Charles Babbage",
 "A.New Delhi", "B.Chandigarh", "C.Bengaluru", "D.Chennai",
 "A.Objective C", "B. B", "C. C++", "D. C#",
 "A. River Nile", "B. Amazon River","C. Mississipi River","D. Ganga River",
 "A. Benjamin Franklin", "B.Einstein","C.Thomas Alvson Edison ","D. CV Raman",
 "A.Govind Ballabh Pant","B.Jawaharlal Nehru","C.Subhash Chandra Bose","D.Dr.Sardar Patel",
 "A.Discovery", "B. Perseverance","C. Grit","D. Inguenity",
 "A.Chandra Gupta Maurya ", "B. Chanakya","C. Vikramaditya","D. None of the above",
 "A. British Army", "B. Mughals","C. Afghans","D. Portuguese",
 };

 char answers[10]= {'B', 'A', 'A','B','A','C','D','B','A','C'};
 int numberofquestions= sizeof(questions)/sizeof(questions[0]);
 char guess;
 int score = 0;
 int i,j;
 printf("QUIZ GAME\n");
 for(i=0;i<numberofquestions;i++){
 printf("****\n");
 printf("%s\n", questions[i]);
 printf("*****\n");
 for(j=(i*4); j< (i*4)+4; j++){
 printf("%s\n", options[j]);
 }
 printf("Guess:");
 scanf("%c", &guess);
 scanf("%c"); // to remove \n from input buffer

 guess= toupper(guess);// to accept both upper case and lower case letters

 if(guess== answers[i]){
 printf("CORRECT!!\n");
 score++;

 }
 else
 printf("INCORRECT!!\n");
 }

 printf("****\n");
 printf("FINAL SCORE: %d/%d", score, numberofquestions);
 printf("****\n");
 printf("Thank You for playing!!!\n");
 printf("------xxxxxx------");




return 0;
}
