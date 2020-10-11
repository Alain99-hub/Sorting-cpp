#pragma once
#include <iostream>
#include <string.h>
#include <time.h>
#include <string>
#include <iostream>

using namespace std;

class Alumno
{
private : string a_firstName;
private : string a_lastName;
private: int a_year;
private: int a_mont;
private : int a_day;
private : int  a_clave=0;
    
public : Alumno(string firstName, string lastName_, int year_, int mont_, int day_, int clave_) {
        a_firstName = firstName;
        a_lastName = lastName_;
        a_year = year_;
        a_mont = mont_;
        a_day = day_;
        a_clave = clave_;
    }

public :

    void setFirstName(string firstName) {
       a_firstName = firstName;
    }

    void setLastName(string lastName) {
        a_lastName = lastName;
    }
    void setYear(int year) {
        a_year = year;
    }
    void setMont(int mont) {
        a_mont = mont;
    }
    void setDay(int day) {
        a_day = day;
    }
    
    void setClave(int clave) {
        a_clave = clave;
    }

    const string getFirstName() {
        return a_firstName;
    }

   
     string getLastName() {
        return a_lastName;
    }

   

    int getYear() {
        return a_year;
    }
    int getMont() {
        return a_mont;
    }
   int  getDay() {
        return a_day;
    }

    int getClave() {
        return a_clave;
    }

 

       
   void drawData() {
       cout << " " << '\n';
       cout << "First name: " <<a_firstName << '\n';
       cout << "Last name:  " << a_lastName << '\n';
       cout << "Birthday:   " <<a_year << "/" << a_mont << "/" << a_day << '\n';
       cout << "Key:        " << a_clave << '\n';

    }
};

