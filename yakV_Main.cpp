#include <iostream>
#include <limits>
#include <cmath> 
using std::cout , std::cin, std::string;

int main(){

    bool gameloop = true;

    do{


    //calcolatrice salto verticale
    string name ;
    float height_u ;
    float h;
    float m;

   cout<<R"(
░▒▓█▓▒░░▒▓█▓▒░░▒▓██████▓▒░░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ 
░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░    '( )/'  '
░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░░▒▓█▓▒▒▓█▓▒░    '  |/ ' 
 ░▒▓██████▓▒░░▒▓████████▓▒░▒▓███████▓▒░ ░▒▓█▓▒▒▓█▓▒░    ' /| _ '
   ░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▓█▓▒░      /_|/ \  '
   ░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░ ░▒▓█▓▓█▓▒░     ' /    \_ '
   ░▒▓█▓▒░   ░▒▓█▓▒░░▒▓█▓▒░▒▓█▓▒░░▒▓█▓▒░  ░▒▓██▓▒░       /_ '  '
                                                      
                Yak Vertical.                                                     
)"<<"***************************************************************************** \n";

    cout<<"Hello User! Welcome to YakVertical, \n enter your name here: \n";
getline(cin, name);
        cout<<"\n";

    cout<<"Hello "<< name<<", How tall is your new milestone to misure (rim 3.05m) in meters? \n";
cin>>h;
        cout<<"\n";


    cout<<"Alr what's your height with hands-up, in m? \n";
cin>>height_u; 
        cout<<"\n";

    cout<<"Last thing what's your wheight in kg? \n";
cin>>m;
        cout<<"\n";





    cout<<"**************************************************************\n";
    cout<<"RESULTS: \n \n";

    float Vjump = (h*100) - (height_u*100);
        cout<<"Vertical jump: "<< Vjump<<"cm \n \n";


    float g = 9.81;
    float L = m*g*h;
    float a = sqrt(2 * g * Vjump / 100);  
    float F =  m * a;  
        cout<<"You genered "<<F<<" N, so "<<F/g<<" Kg \n";

        string dummy;
        cout<<"**************************************************************\n"<<"Send any key to quit or 'r' to restart: ...";

      

        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        getline(cin,dummy);
        
        
        
        if(dummy == "r" || dummy == "R"){ gameloop == true;}
        else if(dummy != "r" && dummy != "R"){!gameloop;}

        int i;
        for(i;i<11;i++){cout<<"\n \n";}

        }while(gameloop);

return 0;

}