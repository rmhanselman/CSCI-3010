
/**
Oceane Andreis,  Abby Nay
Homework 2
Date: October 1 2019

This program is my TestTypes.cpp.
pair= like tuple
pair<T,string> p = {1,"hi"}
p.first(would equal 1)
map=
//check if the input is a negative num
//what if you are inserting a vector with five time the same things
//Then don't add it five time but increment the count five times.
overload is creating another function with the same name but different parameters
*/


#include "Counter.hpp"
#include "TestTypes.h"
#include <iostream>
#include "string"

using namespace std;
int  main() {

    cout<<"STRING:"<<endl;
    Counter<string> c;
    cout<<"Testing Insert: "<<endl;
    c.Insert("dog");
    c.Insert("dog");
    c.Insert("dog");
    c.Insert("cat");
    c.Insert("cat");
    c.Insert("bird");
    //
    // c.Increment("dog");
    // c.Increment("cat",3);
    // cout<<"Testing Increment: "<<endl;
    // cout<<c<<endl;
    //
    // c.Decrement("dog");
    // c.Decrement("cat",3);
    //
    //
    cout<<"Testing most common: "<<endl;

    //cout<<c.MostCommon(2)<<endl;
    //
    // cout<<"Testing least common: "<<endl;
    // c.LeastCommon(2);
    //
    // cout<<"Testing ostream & Decrement: "<<endl;
    // cout<<c<<endl;
    //
    // cout<<"Total Count: "<<c.totalCount()<<endl<<endl;
    // cout<<c.NormalizeWeights()<<endl;

//---------------------------
    cout<<"VECTOR:"<<endl;

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // Counter<int> e(v);
    // e.MostCommon(2);
    // cout<<e<<endl;
    //---------------------------
      cout<<"ENUM:"<<endl;
    //  SquareType a;
      // Counter<SquareType> f;
      // // f.MostCommon(2);
      // cout<<f<<endl;

  //---------------------------
  // cout<<"INT:"<<endl;

    //   Counter<int> d;
    // // cout<<"Testing Insert with Int: "<<endl;
    // d.Insert(1);
    // d.Insert(1);
    // d.Insert(5);
    // d.Insert(6);
    // d.Insert(20);
    // d.Insert(5);
    // d.Insert(-1);
    // d.Insert(5);
    // d.Insert(5);
    // d.Insert(5);
    // d.Insert(5);
    //
    //
    // cout<<"Testing most common: "<<endl;
    // d.MostCommon(2);
    //
    // cout<<"Testing least common: "<<endl;
    // d.LeastCommon(2);
    // cout<<endl<<"Testing range : "<<endl;
    // cout<<d.Range(7,21)<<endl; //5
    // cout<<d<<endl;
    // d.Remove(5);
    // cout<<d<<endl;
    // cout<<d.NormalizeWeights()<<endl;



    return 0;
}


//so for example squaretype a , then pass insert(a) to test the enum
