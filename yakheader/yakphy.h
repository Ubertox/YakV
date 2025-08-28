#include <vector>
#include <iostream>
#include <cmath>
#include <utility>



class phy
{
    

    enum class UmisureX {Km,Hm,Dam,m,dm,cm,mm};
    enum class Utempo {Ore, Min , Sec};
    enum class Uvelocità {Km_h,m_s};
    enum class Uaccelerazione {Km_h_2,m_s_2};


    double InMetri(double lung, UmisureX unit){


        switch (unit)
        {
        case UmisureX::Km :
            return lung*1000;
            break;

        case UmisureX::Hm :
            return lung*100;
            break;

            case UmisureX::Dam :
            return lung*10;
            break;

            case UmisureX::dm :
            return lung/10;
            break;

            case UmisureX::cm :
            return lung/100;
            break;

            case UmisureX::mm :
            return lung/1000;
            break;


        default:
        std::cout<<"Errore durante la conversione";
            break;
        }

  
    }

    

 std::vector<int> x{0,0}; 

 std::pair <double,double> t {0.0 , 0.0}; //tempo
 std::pair <double,double> v {0.0 , 0.0}; //velocità
 std::pair <double,double> d {0.0 , 0.0}; //distanza
 std::pair <double,double> a {0.0 , 0.0}; //accelerazione
 std::pair <double,double> m {0.0 , 0.0}; //massa
 std::pair <double,double> h {0.0 , 0.0}; //altezza
 std::pair <double,double> f {0.0 , 0.0}; //forza
 std::pair <double,double> L {0.0 , 0.0}; //lavoro
 std::pair <double,double> p {0.0 , 0.0}; //pressione
 std::pair <double,double> T {0.0 , 0.0}; //temperatura

 double const g = 9.81;
    

double MotoUniforme(){  return x[1] + v.second * t.second ; }

double MotoUniaccelerato(){ return v.second +a.second *t.second ; }

double LeggeOraria(){ return x[0] + v.first * t.second  + (1/2) * a.second  * pow(t.second ,2) ; }

double CadutaLibera(){ return sqrt(2*h.second *g);}

void HelpMoto(){std::cout<<" ";}

};


