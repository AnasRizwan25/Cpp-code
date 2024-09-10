#include <iostream>
using namespace std;

// int main()
// {

//   int num;
//   cout << "Enter a number: ";

//   cin >> num;

//   if (num > 0)
//   {
//     cout << "The Number is Positive" << endl;
//   }
//   else if (num < 0)
//   {
//     cout << "The Number is Negative" << endl;
//   }
//   else
//   {
//     cout << "The Number is Zero" << endl;
//   }
//   return 0;
// }

// int main(){

//   int age;
//   cout << "Enter Your Age: ";
//   cin >> age;

//   if(age >=18){
//     cout << "You can vote" << endl;
//   }else{
//     cout << "You can not vote" << endl;
//   }
//   return 0;
// }

// int main(){

//   int num;
//   cout << "Enter the number: ";
//   cin >> num;

//   if(num % 2 == 0){
//     cout << "The given number is Even" << endl;
//   }else{
//     cout << "The given number is Odd" << endl;
//   }
//   return 0;
// }

// int main(){

//   int mark;
//   char grade;

//   cout << "Enter the Mark: ";
//   cin >> mark;

//   if(mark >= 80 && mark <=100){
//     grade = 'A';
//   }else if(mark >= 70){
//     grade = 'B';
//   }else if(mark >= 60){
//     grade = 'C';
//   }else if(mark >= 50){
//     grade = 'D';
//   }else if(mark >= 40){
//     grade = 'E';
//   }
//   else{
//     grade = 'F';
//   }

//   cout << "Your grade is: " << grade << endl;

//   return 0;
// }

// int main(){

//   char alpha;
//   cout << "Enter a character: ";
//   cin >> alpha;

//   if(alpha >= 'A' && alpha <= 'Z' ){
//     cout << "The Alphabet is UpperCase" << endl;
//   }else{
//     cout << "The Alphabet is LowerCase" << endl;
//   }
//   return 0;
// }

// int main(){

//   char alpha;
//   cout << "Enter a character: ";
//   cin >> alpha;

//   if(alpha >= 65 && alpha <= 91 ){
//     cout << "The Alphabet is UpperCase" << endl;
//   }else{
//     cout << "The Alphabet is LowerCase" << endl;
//   }
//   return 0;
// }

// int main(){

//   int num = -1211;

//   cout << (num >=0? "Positive Number": "Negative Number") << endl;

//   return 0;
// }

// int main(){

//   int num = 1, stop;
//   cout << "Enter ending point: ";

//   cin >> stop;

//   while(num<=stop){
//     cout << num << " ";
//     num++;
//   }

//   return 0;
// }

// int main(){

//   int stop;
//   cout << "Enter ending point: ";

//   cin >> stop;

//   for(int i = 1; i<=stop;i+2){
//     cout << i << " ";
//   }

//   return 0;
// }

// int main(){

//   int n;
//   cout << "Enter the number: ";

//   cin >> n;

//   int total = 0;

//   for(int i = 1; i <= n; i++){
//     total+=i;
//   }

//   cout << "Total: " << total << endl;

//   return 0;
// }
// int main(){

//   int n = 50;

//   int i = 1;
//   int total = 0;

//   while(i <= n){
//     total+=i;
//     if(i == 10){
//       break;//keyword
//     }
//     i++;
//   }

//   cout << "Total: " << total << endl;

//   return 0;
// }
// int main()
// {

//   int n = 5;

//   int i = 1;
//   int total = 0;

//   while (i <= n){

//     if (i % 2 != 0){
//       total += i;
//     }
//      i++;

//   }

//   cout << "Total: " << total << endl;

//   return 0;
// }
// int main()
// {

//   int n = 10;
//   int total = 0;

//    for(int i = 1; i <= n; i++){

//     if (i % 2 == 0){
//       total += i;
//     }
//   }

//   cout << "Total: " << total << endl;

//   return 0;
// }

// int main()
// {

//   int n = 1;
//   int i = 5;

//   do{
//     cout << i << endl;
//     i--;
//   }while(i>=n);

//   return 0;
// }

// int main(){

//   int num = 17;
//   bool isCheck = true;

//   for(int i = 2; i < num; i++){
//     if(num % i == 0 ){
//       isCheck = false;
//       break;
//     }
//   }

//   cout << (isCheck == true? "Prime Number": "Composite Number") << endl;

//   return 0;
// }


// int main(){
//   for(int i = 1; i <= 5;i++){
//     for(int j = 1; j<=5; j++){
//       cout << "*";
//     }
//       cout << " " << endl;
//   }
//   return 0;
// }

// int main(){
//   int n = 10;
//   int sum = 0;
//   for(int i = 1;i <= n; i++){
//     if(i % 3 ==0){
//       sum += i;
//     }
//   }
//   cout << "Sum: " << sum << endl;
// }

int main(){
  int n = 4;
  
  int f = 1;
  for(int i = 1;i <= n; i++){
      f *= i;
  }
  cout << "Factorial of " << n << ": " << f << endl;
}