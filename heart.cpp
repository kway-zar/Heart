#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    int scale;
    int i,j,k,l,space;

    cout << "enter scale:";
    cin >> scale;
    Sleep(2);

   
    while(true)
    {   
        system("cls");
        cout << "\n\n\n\n\n" << endl;
        
        for(i = 0; i<=scale; i++)
        {
            
            for(space = 0; space <= (scale/2)-i; space++)
            {
                cout << " ";
            }
            for(j = 0; j <= i+scale; j++ )
            {
             
                cout << " *";
                if(j > scale+(scale/2))
                {
                   j = scale*2;
                }
            
            }       
         
            if(j = i+scale)
            {

                for(space = 0; space <= (scale/2)-i; space++)
                {
                    cout << "  ";
                }
                for(j = 0; j <= i+scale; j++ )
                {
                    cout << " *";
                    if(j > scale+(scale/2))
                    {
                        j = scale*2;
                    }
                }
            
            }
        
            cout << endl;

        }

        for(i = 0; i <= scale*2;i++)
        {
            for(k = 0; k<= i*2;k++)
            {
                cout << " ";
            }
            for(l = k; l <= (scale*3)+3; l++)
            {

                cout << " *";

            }
            cout << endl;

        }
        
        
    }
    
    return 0;
}