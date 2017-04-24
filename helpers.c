/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
   
    // TODO: implement a searching algorithm
    int first=0;
    int last=n-1;
    int middle;
    bool index=false;
    while(last>=first)
    {
         middle=first+(last-first)/2;
        if(value==values[middle])
         {
            
           index= true; 
           break;
            
         }        
       else if(values[middle]<value)
        {
            first=middle+1;
        //     middle=(first+middle)/2;
        }
        else
        {
          last=middle-1;  
        }
       // middle=(first+middle)/2;
        
        
    }
    
    return index;
     
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
   
    // TODO: implement an O(n^2) sorting algorithm
    for(int x=0; x<n; x++)

	{

		int min = x;

		for(int y=x; y<n; y++)

		{

			if(values[min]>values[y])

			{

				min = y;

			}

		}

		int temp = values[x];

		values[x] = values[min];

		values[min] = temp;
	

    }
        
    
    
      return ;
}
