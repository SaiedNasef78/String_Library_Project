// Course 10 OOP  String Project Libarriray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
    clsString String1;
    clsString String2("Saied nasef Abdelguad");
 String1.Value = "saied";
 
 cout << "Value1= " << String1.Value << endl;
 cout << "Value2= " <<  String2.Value << endl;

 // Print Number Of Words
    cout << "Count = "  << clsString::CountWords("Saied nasef") << endl;
   cout << "Counter= " <<  String2.CountWords();

   // Print FirstLatter 
   cout << "\nFirstLatter= ";
   String2.PrintFirstLatter();

   //Print UpperFirstLatter
   cout << endl << "Upper FirstLatter = ";
   String2.UperrFirstLatterEachWord();
   cout << String2.Value;
     //Print Lower FirstLatter
  cout << "\nLower First Latter= ";
  String2.LowerFirstCapitalLatter();
  cout << String2.Value;
     //PrintUppert All words
     cout << "\nUpper Captial All Latter = ";
     String2.UpperCapitalLatter();
     cout << String2.Value;
     // Print lower All Words
     cout << "\nlower Smaller Latter = ";
     String2.lowerSmallLatter() ;
    cout <<  String2.Value;
     //print Convert Small Latter To Cpital Ltter And Reverse
     cout << "\nInvertAllLatter = ";
     String2.InvertAllLatter();
     cout << String2.Value;
     //Print Count Latter
     clsString String3("Saied Nasef Abdelguaad Gabala");
     cout << "\nCount All Latter = " << String3.CountLatter() << endl;
     cout << "Count Capital Latter =" << String3.CountLatter(clsString::CapitalLatter) << endl;
     cout << "Count Smaller Latter= " << String3.CountLatter(clsString::SmallLatter) << endl;

     //Print Charactring from String
     cout << "Count Character From string = " << String2.CountCharctringToString('S') << endl;
     //Print  Count All Vewoel a i u o e  الحروف المتحركه 
     cout << "cOUNT vewoel =" << String2.CountAllVewoel() << endl;

     //Print All Vewol 
     cout << " All Vewel =";
     String2.PrintAllVewoel() ;
     cout << endl;
    
     String2.PrintEachWords();
     cout << "\ncount each word= ";
   cout <<   String2.CountEachWords();
   //Print Splite Vector 
   cout << "\n Splite Vector From String= ";
  
   String2.PrintVector();
  /* cout << "Saied ";*/
   clsString String4("       Saied Nasef Abdelguaaad       ");
   cout << "\nTirm Lift = ";
   String4.TrimLift();
  cout <<  String4.Value;
   cout << "\nTrim Right= ";
   String4.TrimRight() ;
   clsString String5("       Saied Nasef Abdelguaaad       ");
   cout << String5.Value;
   cout << "\nJoin String = ";
   vector<string>Vjoin{ "Saied","Nasef","Abdelguaad" } ;
 cout << String2.JoinString(Vjoin,",");
 cout << "kkkk";
string  Arr1[3] = { "saied","nasef","abdelguaad" };
cout << "\nJoin String Use Array : " << clsString::JoinString(Arr1, 3) << endl;
cout << "Reverse In Words= ";
String5.ReverseInWordsString();
cout << String5.Value << endl;
cout << "Replace Words= " << String5.ReplaceInwordsBuildInFunction("Saied Nasef Abdelgwaad", "Nasef", "lhwty") << endl;
clsString String6 ( "Saied. ;nasef :abdelgwaad'");

String6.IsPucuchinToRemove();

cout << "The Punctual Removed= "  << String6.Value << endl;
 system("pause>0");
 return 0;
};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
