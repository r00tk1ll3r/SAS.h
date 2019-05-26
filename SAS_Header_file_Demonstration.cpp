/*Written by r00tk1ll3r*/
/*This Program demonstrate use case of SAS.h header file*/
/*also program demonstrates 4 different type of sorting methods and two different type searching methods
 on integer and floating point using SAS.h header file's funtion*/
/*again also demonstrates use case of SAS.h header file's all Functions*/
/*SAS.h header file just contain 6 funtions*/
#include<iostream>
#include<SAS.h> //included SAS.h header file
#include<conio.h>

using namespace std;

int main()
{
  int sorted[10] = {10,11,12,13,14,14,15,16,17,19}; //sorted integer values
  int unsorted[10] = {12,98,10,65,48,35,73,19,9,51}; //unsorted integer values
  float fsorted[10] = {10.5,11.89,12.47,13.19,14.79,15.78,16.83,17.61,18.17,19.49}; //sorted floating point value
  float funsorted[10] = {12.89,98.5,46.87,26.15,0.258,135.45,45.61,15.49,137.486,453.298}; //unsorted floating point value
  int i,search,opt,position;
  cout<<" [1].Integer Array Bubble Sort\n";
  cout<<" [2].Integer Array Selection Sort\n";
  cout<<" [3].Integer Array Insertion Sort\n";
  cout<<" [4].Integer Array Merge Sort\n";
  cout<<" [5].Integer Array Binary Search\n";
  cout<<" [6].Integer Array Linear Search\n";
  cout<<" [7].Floating Point Array Bubble Sort\n";
  cout<<" [8].Floating Point Array Selection Sort\n";
  cout<<" [9].Floating Point Array Insertion Sort\n";
  cout<<"[10].Floating Point Array Merge Sort\n";
  cout<<"[11].Floating Point Array Binary Search\n";
  cout<<"[12].Floating Point Array Linear Search\n";
  cout<<"\nEnter Your Option\n";
  cin>>opt;
  switch(opt)
  {
    case 1:
            clrscr();
            /*Integer Array Sorting using SAS.h header file's Sorting functions*/
            cout<<"\t\tInteger Sorting\n\n";
            cout<<"\t\tBubble Sort using bsort() funtion in SAS.h header file \n\n";
            cout<<"\t\t\tArray Before Sort\n\n";
            cout<<"\t\t\t";
            for(i=0;i<10;i++)
            {
              cout<<unsorted[i]<<" "; //Print values Before sort
            }
            //bsort(array,size of the array);
            bsort(unsorted,10);
            cout<<"\n\n\t\t\tArray After Sort\n\n";
            cout<<"\t\t\t";
            for(i=0;i<10;i++)
            {
              cout<<unsorted[i]<<" "; //Print values Before sort
            }
            getch();
            break;
    case 2:
            clrscr();
            /*Integer Array Sorting using SAS.h header file's Sorting functions*/
            cout<<"\t\tInteger Sorting\n\n";
            cout<<"\t\tSelection Sort using ssort() funtion in SAS.h header file \n\n";
            cout<<"\t\t\tArray Before Sort\n\n";
            cout<<"\t\t\t";
            for(i=0;i<10;i++)
            {
              cout<<unsorted[i]<<" "; //Print values Before sort
            }
            //ssort(array,size of the array);
            ssort(unsorted,10);
            cout<<"\n\n\t\t\tArray After Sort\n\n";
            cout<<"\t\t\t";
            for(i=0;i<10;i++)
            {
              cout<<unsorted[i]<<" "; //Print values Before sort
            }
            getch();
            break;
    case 3:
            clrscr();
            /*Integer Array Sorting using SAS.h header file's Sorting functions*/
            cout<<"\t\tInteger Sorting\n\n";
            cout<<"\t\tInsertion Sort using isort() funtion in SAS.h header file \n\n";
            cout<<"\t\t\tArray Before Sort\n\n";
            cout<<"\t\t\t";
            for(i=0;i<10;i++)
            {
              cout<<unsorted[i]<<" "; //Print values Before sort
            }
            //isort(array,size of the array);
            isort(unsorted,10);
            cout<<"\n\n\t\t\tArray After Sort\n\n";
            cout<<"\t\t\t";
            for(i=0;i<10;i++)
            {
              cout<<unsorted[i]<<" "; //Print values Before sort
            }
            getch();
            break;
    case 4:
            clrscr();
            /*Integer Array Sorting using SAS.h header file's Sorting functions*/
            cout<<"\t\tInteger Sorting\n\n";
            cout<<"\t\tMerge Sort using msort() funtion in SAS.h header file \n\n";
            cout<<"\t\t\tArray Before Sort\n\n";
            cout<<"\t\t\t";
            for(i=0;i<10;i++)
            {
              cout<<unsorted[i]<<" "; //Print values Before sort
            }
            //msort(array,0,size of the array);
            msort(unsorted,0,10);
            cout<<"\n\n\t\t\tArray After Sort\n\n";
            cout<<"\t\t\t";
            for(i=0;i<10;i++)
            {
              cout<<unsorted[i]<<" "; //Print values Before sort
            }
            getch();
            break;
    case 5:
            clrscr();
            /*Integer value Searching in integer array using SAS.h header file's searching functions*/
            cout<<"\t\tInteger Searching\n\n";
            cout<<"\t\tBinary Search using bsearch() funtion in SAS.h header file";
            //before search value using binary search Array must be sorted. so now i am gonna use sorted array (sorted[10])
            //bsearch(array,size of the array,search value);
            position=bsearch(sorted,10,15); //search value is 15
            cout<<"\n\n\t\t\tSearch Value Position is "<<position; //Look again Above sorted[10] array in that array 6th position is 15 so search value position is 6 (starting from 0)
            getch();
            break;
    case 6:
            clrscr();
            /*Integer value Searching in integer array using SAS.h header file's searching functions*/
            cout<<"\t\tInteger Searching\n\n";
            cout<<"\t\tLinear Search using lsearch() funtion in SAS.h header file";
            //dont have to sorted
            //lsearch(array,size of the array,search value);
            position=lsearch(unsorted,10,35); //search value is 35
            cout<<"\n\n\t\t\tSearch Value Position is "<<position; //Look again Above unsorted[10] array in that array 5th position is 35 so search value position is 6 (starting from 0)
            getch();
            break;
    case 7:
            clrscr();
            /*floating point Array Sorting using SAS.h header file's Sorting functions*/
            cout<<"\t\tFloating point value Sorting\n\n";
            cout<<"\t\tBubble Sort using bsort() funtion in SAS.h header file \n\n";
            cout<<"\t\tArray Before Sort\n\n";
            cout<<"\t\t";
            for(i=0;i<10;i++)
            {
              cout<<funsorted[i]<<" "; //Print values Before sort
            }
            //bsort(array,size of the array);
            bsort(funsorted,10);
            cout<<"\n\n\t\tArray After Sort\n\n";
            cout<<"\t\t";
            for(i=0;i<10;i++)
            {
              cout<<funsorted[i]<<" "; //Print values Before sort
            }
            getch();
            break;
    case 8:
            clrscr();
            /*floating point Array Sorting using SAS.h header file's Sorting functions*/
            cout<<"\t\tFloating point value Sorting\n\n";
            cout<<"\t\tSelection Sort using ssort() funtion in SAS.h header file \n\n";
            cout<<"\t\tArray Before Sort\n\n";
            cout<<"\t\t";
            for(i=0;i<10;i++)
            {
              cout<<funsorted[i]<<" "; //Print values Before sort
            }
            //ssort(array,size of the array);
            ssort(funsorted,10);
            cout<<"\n\n\t\tArray After Sort\n\n";
            cout<<"\t\t";
            for(i=0;i<10;i++)
            {
              cout<<funsorted[i]<<" "; //Print values Before sort
            }
            getch();
            break;
    case 9:
            clrscr();
            /*floating point Array Sorting using SAS.h header file's Sorting functions*/
            cout<<"\t\tFloating point value Sorting\n\n";
            cout<<"\t\tInsertion Sort using isort() funtion in SAS.h header file \n\n";
            cout<<"\t\tArray Before Sort\n\n";
            cout<<"\t\t";
            for(i=0;i<10;i++)
            {
              cout<<funsorted[i]<<" "; //Print values Before sort
            }
            //isort(array,size of the array);
            isort(funsorted,10);
            cout<<"\n\n\t\tArray After Sort\n\n";
            cout<<"\t\t";
            for(i=0;i<10;i++)
            {
              cout<<funsorted[i]<<" "; //Print values Before sort
            }
            getch();
            break;
    case 10:
            clrscr();
            /*floating point Array Sorting using SAS.h header file's Sorting functions*/
            cout<<"\t\tFloating point value Sorting\n\n";
            cout<<"\t\tMerge Sort using msort() funtion in SAS.h header file \n\n";
            cout<<"\t\tArray Before Sort\n\n";
            cout<<"\t\t";
            for(i=0;i<10;i++)
            {
              cout<<funsorted[i]<<" "; //Print values Before sort
            }
            //msort(array,0,size of the array);
            msort(funsorted,0,10-1);
            cout<<"\n\n\t\tArray After Sort\n\n";
            cout<<"\t\t";
            for(i=0;i<10;i++)
            {
              cout<<funsorted[i]<<" "; //Print values Before sort
            }
            getch();
            break;
    case 11:
            clrscr();
            /*Integer value Searching in integer array using SAS.h header file's searching functions*/
            cout<<"\t\tFloating point value Searching\n\n";
            cout<<"\t\tBinary Search using bsearch() funtion in SAS.h header file";
            //before search value using binary search Array must be sorted. so now i am gonna use sorted array (fsorted[10])
            //bsearch(array,size of the array,search value);
            position=bsearch(fsorted,10,15.78); //search value is 15.78
            cout<<"\n\n\t\t\tSearch Value Position is "<<position; //Look again Above fsorted[10] array in that array 5th position is 15.87 so search value position is 5 (starting from 0)
            getch();
            break;
    case 12:
            clrscr();
            /*Integer value Searching in integer array using SAS.h header file's searching functions*/
            cout<<"\t\tInteger Searching\n\n";
            cout<<"\t\tLinear Search using lsearch() funtion in SAS.h header file";
            //dont have to sorted
            //lsearch(array,size of the array,search value);
            position=lsearch(funsorted,10,26.15); //search value is 26.15
            cout<<"\n\n\t\t\tSearch Value Position is "<<position; //Look again Above funsorted[10] array in that array 3th position is 26.15 so search value position is 3 (starting from 0)
            getch();
            break;
    default:
            clrscr();
            cout<<"\n\t\tInvalid Option\n";
            getch();
            break;
  }
  return 0;
}
