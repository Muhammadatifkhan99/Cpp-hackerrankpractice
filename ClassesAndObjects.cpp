#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student {
  public:
    int s1,s2,s3,s4,s5;  
    void input(int x,int x2,int x3,int x4,int x5);
    int calculateTotalScore(int a1,int a2,int a3,int a4,int a5);
    
};
	void Student:: input(int x,int x2,int x3,int x4,int x5){
        cin>>x>>x2>>x3>>x4>>x5;
        s1=x;
        s2=x2;
        s3=x3;
        s4=x4;
        s5=x5;
}


	int	Student::calculateTotalScore(int a1,int a2,int a3,int a4,int a5){
        a1 = s1;
        a2 = s2;
        a3 = s3;
        a4 = s4;
        a5 = s5;
        int sum {0};
        sum = a1 + a2 + a3 + a4 + a5;
        return sum;
    }

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input(x);
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

