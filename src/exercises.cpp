
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  string mins;
  mins = s1;
  if(mins > s2) {
    mins =s2;
  }
      if (mins > s3) {
      mins = s3;
    }
    cout<<mins;
  }

void exercise_2(double A, double B, double C) {
   double D = B * B - 4 * A * C;
   if (D > 0 && A != 0)
   {
       double d_sqrt = sqrt (D);
       double x1 = (-B + d_sqrt) / (2A);
       double x2 = (-B - d_sqrt) / (2A); 
       cout<<x1<<" "<<x2<<endl;
   }
   else if (D==0 && A != 0)
   {
   double d_sqrt = sqrt (D);
   double x1 = (-B + d_sqrt) / (2A); 
   cout<<x1<<endl;
   }
   else if (A==0&& B!=0)
   { 
       cout<< (-1(C))/B <<endl;
   }
   else if (A!=0 && B==0)
   {
     cout<< sqrt (C/A) <<endl;
   }
   else
   {
       cout<<"";
   }
}
void exercise_4(double n, double a, double b, double x, double y) { 
    double porc;
    double desc;
    if (n > a && n < b){
     porc = x/100 * n;
     desc = n - porc;
    }
    else if (n > b){
     porc = y/100 * n;
     desc = n - porc;
    }
    else{
      desc = n;
    }
    cout << desc << endl;
}

void exercise_5(char character) {
}

void exercise_6(int number) {
 
}

void exercise_7(double r) {
  if (r >= 0)
  {
    cout << 4*3.14* r*r << endl;
  }
else
  {
    cout << "Error: Radius cannot be negative." endl;
  }
}
  

void exercise_8(long int seconds) {
 int h;
int m;
if(seconds < 0){
    cout << "Error: Input seconds cannot be negative." << endl;
}
else {
h = seconds/3600;
seconds = seconds%3600;
m = seconds/60;
seconds = seconds%60;
  if(h < 10 && m < 10 && seconds < 10){
    cout << "0" << h << ":" << "0" << m << ":" << "0" << seconds << endl;
}
else if(h < 10 && m >= 10 && seconds >= 10){
    cout << "0" << h << ":" << m << ":" << seconds << endl; 
}
else if(h < 10 && m >= 10 && seconds < 10){
    cout << "0" << h << ":" << m << ":" << "0" << seconds << endl;
}
else if(h < 10 && m < 10 && seconds >= 10){
    cout << "0" << h << ":" << "0" << m << ":" << seconds << endl;
}
else if(h >= 10 && m < 10 && seconds < 10){
    cout << h << ":" << "0" << m << ":" << "0" << seconds << endl; 
}
else if(h >= 10 && m >= 10 && seconds < 10){
    cout << h << ":" << m << ":" << "0" << seconds << endl;
}
else{
  cout << h << ":" << m << ":" << seconds << endl;
} 
}
}
string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  char caracter1 = s1[0];
  char caracter2 = s2[0];
  char caracter3 = s3[0];
  char caracter4 = s4[0];
  char caracter5 = s5[0];
  cout << s1 << s2 <<s3 << s4 << s5 << endl;
  if ( s1 == s2) {
    result "Hemos encontrado algo";
  }
  else {
  }
  return "Aun sin suerte";
}

int exercise_10(int a, int b) {
  if (a < 0 && b < 0) {
    return 0;
  }
  int sum - a + b;
  int digit_count - (sum --0)? 1:
  (int)log10(abs(sum)) + 1;
  return sum* digit_count;
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}