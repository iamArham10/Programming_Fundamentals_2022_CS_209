#include <iostream>
using namespace std;


main()
{
    int weights[10];
	int sorted_weights[10];

    for (int idx = 0;idx < 10;idx++)
    {
        cout<<"Enter weight no "<<idx+1<<" : ";
        cin >> weights[idx];
    }

    int extra;
    for (int idx = 0; idx < 10; idx++)
    {
        for(int itx = 1+idx; itx < 10 ; itx++)
        {
            if(weights[idx] > weights[itx])
            {
                extra = weights[idx];
                weights[idx] = weights[itx];
                weights[itx] = extra;
            }
           


        }
		sorted_weights[idx] = weights[idx];
        
        
        

    }
	for (int idx = 0; idx <10;idx++)
	{
		cout<<sorted_weights[idx]<<" ";
    }
}

