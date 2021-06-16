/* Switch example */

#include <iostream>


using namespace std;
char ans;
int main()
{

    do
    {
        cout << "Input number 1-4 :";
        cin >> ans;

        switch (ans){

            case 0x31:
                cout << "You select-1"<<endl;
                break;

            case 0x32:
                cout << "You select-2"<<endl;
                break;

            case 0x33:
                cout << "You select-3"<<endl;
                break;
            
            case 0x34:
                cout << "You select-4"<<endl;
                break;
            // Изпълнява ако няма нито един от горните случай
            default:
                cout << ans << " is not a proper selection! "<<endl;

        }//end switch
        
    } while (ans >'4' || ans < '1' ); //end do

    

return 0;
}// end main