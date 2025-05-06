//location
//theater
//movies
//date
//timings
//seats
//amount
//snacks
//bill
//exit
//ratings
//#include <stdio.h>
//#include <wchar.h>
//#include <locale.h>
//
//int main() {
//    // Set the locale to support UTF-8
//    setlocale(LC_ALL, "");
//
//    // Top-left corner
//    wprintf(L"Top-left: ╭\n");
//
//    // Top-right corner
//    wprintf(L"Top-right: ╮\n");
//
//    // Bottom-left corner
//    wprintf(L"Bottom-left: ╰\n");
//
//    // Bottom-right corner
//    wprintf(L"Bottom-right: ╯\n");
//
//    return 0;
//}



#include <wchar.h>
#include <locale.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Cinema{
    char location[50];
    char theatre[50];
    char movies[50];
    char date[50];
    char timings[50];
    char seats[50];
    int amount;
    char snacks[50];
    char name[10];


}c;

const char locations[5][50]={ "  Salem    ","   Kovai   ","   Chennai ","   Trichy   ","  Namakkal  "};

const char s_theatres[3][50]={"   ARRS    ","    ROX    ","   ASCARS   "};
const char k_theatres[3][50]={"  BROADWAY ","  Kauvery  ","   FUNMALL  "};
const char c_theatres[3][50]={"  Sathyam  ","   Rohini  ","    INOX    "};
const char t_theatres[3][50]={"  Mariyam  ","  Megastar ","    Star    "};
const char n_theatres[3][50]={"   Shiva   ","     KS    ","   Abirami  "};


const char a_movies[7][50]={" Sachein  ","   GBU    ","  Gangers  ","    U     ","   U/A    ","    U/A    "};
const char r_movies[7][50]={" Gangers  ","   GBU    ","  Sachein  ","   U/A    ","   U/A    ","    U/A    "};
const char o_movies[7][50]={" Sachein  "," Gangers  ","    GBU    ","    U     ","   U/A    ","    U/A    "};
const char b_movies[7][50]={"   GBU    "," Sachein  ","  Sinners  ","   U/A    ","   U/A    ","English(A) "};
const char k_movies[7][50]={" Sachein  ","   GBU    ","   Retro   ","    U     ","   U/A    ","    U/A    "};
const char f_movies[7][50]={" Gangers  ","   GBU    ","  Sachein  ","   U/A    ","   U/A    ","    U/A    "};
const char s_movies[7][50]={" Gangers  ","Ten Hours ","  Dog Man  ","   U/A    ","   U/A    ","English(U) "};
const char c_movies[7][50]={"Ten Hours ","  Sachein ","  Gangers  ","   U/A    ","   U/A    ","    U/A    "};
const char i_movies[7][50]={" Gangers  ","  Sachein ","    GBU    ","   U/A    ","   U/A    ","    U/A    "};
const char m_movies[7][50]={" Sachein  "," Gangers  ","    GBU    ","    U     ","   U/A    ","    U/A    "};
const char t_movies[7][50]={" Sachein  ","   GBU    ","   Retro   ","    U     ","   U/A    ","    U/A    "};
const char v_movies[7][50]={" Gangers  ","   GBU    ","  Sachein  ","   U/A    ","   U/A    ","    U/A    "};
const char d_movies[7][50]={" Gangers  ","  Dog Man ","   Retro   ","   U/A    ","English(U)","    U/A    "};
const char u_movies[7][50]={" Gangers  ","   GBU    ","  Sachein  ","   U/A    ","   U/A    ","    U/A    "};
const char x_movies[7][50]={" Gangers  ","   GBU    ","  Sachein  ","   U/A    ","   U/A    ","    U/A    "};

const char date[3][50]={"  │ Apr 24 2025  │","│ Apr 25 2025 │","   │  Apr 26 2025 │"};

const char timings[5][50]={"│  8.30 AM  │","│  12.00 PM  │","│  4.00 PM   │","│  7.00 PM  │","│  10.00 PM  │"};

const char seats[1000][1000]={"\n","╭───────────────────────────────────────────────────────────────╮\n",

                           "│\t\t\t\t\t\t\t\t  │\n",
                           "│\t"," ","  ","1","2","3","   ","4","5","6","7","   ","8","9","10","\t","│\n",
                           "│\t\t\t\t\t\t\t\t  │\n",
                           "│\t","A","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "│\t","B","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "│\t","C","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "│\t\t\t\t\t\t\t\t  │\n",
                           "│\t","D","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "│\t","E","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "│\t","F","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "│\t","G","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "│\t","H","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "│\t\t\t\t\t\t\t\t  │\n",
                           "│\t","I","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "│\t","J","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","│\n",
                           "│\t\t\t\t\t\t\t\t  │\n",
                           "│\t\t\t\t\t\t\t\t  │\n",
                           "│\t\t╰───────────────────────────────────╯\t\t  │\n",
                           "│\t\t\t\t\t\t\t\t  │\n",
                           "╰───────────────────────────────────────────────────────────────╯\n"};

//const char seats[1000][1000]={"\n","□ a1","a2","a3","   ","a4","a5","a6","a7","   ","a8","a9","a10","\n",
//                           "b1","b2","b3","   ","b4","b5","b6","b7","   ","b8","b9","b10","\n",
//                           "c1","c2","c3","   ","c4","c5","c6","c7","   ","c8","c9","c10","\n",};

const char amount[3][100]={"│ First class = 200  │","│ Second class = 180 │","│    Front Row 60    │"};

const char snacks[3][100]={"│Popcorn 100│","│Coca cola 40│","│ Puffs 50 │"};

int main(){
    system("chcp 65001");
    char location[50];
    int number;
    printf("\t\t\t╭────────────────────╮\n");
    printf("\t\t\t│  Customer Details  │\n");
    printf("\t\t\t╰────────────────────╯\n");

    printf("Enter your name: ");
    scanf("%s",&c.name);

    printf("\nEnter your Mobile Number: ");
    scanf("%d",&number);
    printf("───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");
    printf("\t\t\t╭───────────────────────────────────────────────────────╮\n");
    printf("\t\t\t│  *************  Book My Show - Clone  *************** │\n");
    printf("\t\t\t╰───────────────────────────────────────────────────────╯\n");
    printf("\n\n");
    printf("\t\t\t\t╭──────────────────────────╮\n");
    printf("\t\t\t\t│  Select your Location    │\n");
    printf("\t\t\t\t╰──────────────────────────╯\n\n\n");
    printf("╭───────────╮\t╭───────────╮\t╭───────────╮\t╭────────────╮\t╭────────────╮\n");

    for(int i=0;i<5;i++){
        printf("│%s│\t",locations[i]);
    }
   printf("\n╰───────────╯\t╰───────────╯\t╰───────────╯\t╰────────────╯\t╰────────────╯\n");

    printf("\n");
    printf("Choose your location : ");
    scanf("%s",&c.location);
    printf("──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");
    printf("\t\t\t\t╭──────────────────────────╮\n");
    printf("\t\t\t\t│    Select the Theatre    │\n");
    printf("\t\t\t\t╰──────────────────────────╯\n\n\n");

        if(strcmp(c.location,"salem")==0){
                 printf("╭───────────╮\t╭───────────╮\t╭────────────╮\t\n");
                for(int i=0;i<3;i++){
                    printf("│%s│\t",s_theatres[i]);
                }
         printf("\n╰───────────╯\t╰───────────╯\t╰────────────╯\n");
           }else if(strcmp(c.location,"kovai")==0){
                 printf("╭───────────╮\t╭───────────╮\t╭────────────╮\t\n");
                for(int i=0;i<3;i++){
                    printf("│%s│\t",k_theatres[i]);
                }
         printf("\n╰───────────╯\t╰───────────╯\t╰────────────╯\n");
           }else if(strcmp(c.location,"chennai")==0){
                 printf("╭───────────╮\t╭───────────╮\t╭────────────╮\t\n");
                for(int i=0;i<3;i++){
                    printf("│%s│\t",c_theatres[i]);
                }
         printf("\n╰───────────╯\t╰───────────╯\t╰────────────╯\n");
           }else if(strcmp(c.location,"trichy")==0){
                 printf("╭───────────╮\t╭───────────╮\t╭────────────╮\t\n");
                for(int i=0;i<3;i++){
                    printf("│%s│\t",t_theatres[i]);
                }
         printf("\n╰───────────╯\t╰───────────╯\t╰────────────╯\n");
           }else if(strcmp(c.location,"namakkal")==0){
                 printf("╭───────────╮\t╭───────────╮\t╭────────────╮\t\n");
                for(int i=0;i<3;i++){
                    printf("│%s│\t",n_theatres[i]);
                }
         printf("\n╰───────────╯\t╰───────────╯\t╰────────────╯\n");
           }
           printf("\n");
           printf("Enter the theatre name: ");
           scanf("%s",&c.theatre);

    printf("──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");
    printf("\t\t\t\t╭───────────────────────╮\n");
    printf("\t\t\t\t│  Select your movie    │\n");
    printf("\t\t\t\t╰───────────────────────╯\n\n\n");


if(strcmp(c.theatre,"arrs")==0){
        printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",a_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",a_movies[i]);
    }

    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    //printf("|  \t  |\t|  \t  |\t|  \t  |\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"rox")==0){
        printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",r_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",r_movies[i]);
    }

    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"ascars")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",o_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",o_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"broadway")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",b_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",b_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"kauvery")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",k_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",k_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"funmall")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",f_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",f_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"sathyam")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",s_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",s_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"rohini")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",c_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",c_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"inox")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",i_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",i_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"mariyam")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",m_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",m_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"megastar")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",t_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",t_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"star")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",v_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",v_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"shiva")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",d_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",d_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"ks")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",u_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",u_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}else if(strcmp(c.theatre,"abirami")==0){
    printf("╭────────────╮\t╭────────────╮\t╭─────────────╮\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    for(int i=0;i<3;i++){
        printf("│ %s │ \t",x_movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("│ %s │ \t",x_movies[i]);
    }
    printf("\n│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("│\t     │\t│\t     │\t│\t      │\n");
    printf("╰────────────╯\t╰────────────╯\t╰─────────────╯\n");
}
    printf("Enter the movie name: ");
    scanf("%s",&c.movies);

    printf("\n──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");
    printf("\t\t\t\t╭───────────────────────╮\n");
    printf("\t\t\t\t│   Select the Date     │\n");
    printf("\t\t\t\t╰───────────────────────╯\n\n\n");

        printf("  ╭──────────────╮\t╭─────────────╮\t   ╭──────────────╮\n");
        for(int i=0;i<3;i++){
        printf("%s\t",date[i]);
        }
    printf("\n  ╰──────────────╯\t╰─────────────╯\t   ╰──────────────╯\n\n");
    printf("Select your movie date: ");
    scanf("%s",&c.date);
    printf("\n");
    printf("──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");
    printf("\t\t\t\t╭───────────────────────╮\n");
    printf("\t\t\t\t│   Select the Timings  │\n");
    printf("\t\t\t\t╰───────────────────────╯\n\n\n");

        printf("╭───────────╮\t╭────────────╮\t╭────────────╮\t╭───────────╮\t╭────────────╮\n");
        for(int i=0;i<5;i++){
        printf("%s\t",timings[i]);
    }
    printf("\n╰───────────╯\t╰────────────╯\t╰────────────╯\t╰───────────╯\t╰────────────╯\n\n");
    printf("Enter Your Movie time: ");
    scanf("%s",&c.timings);

    printf("\n");
    printf("──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");
    printf("\t\t\t\t╭───────────────────────╮\n");
    printf("\t\t\t\t│   Select the Seats    │\n");
    printf("\t\t\t\t╰───────────────────────╯\n\n\n");

        for(int i=0;i<198;i++){
        printf("%s  ",seats[i]);
    }
    printf("\n");
    printf("Select your sets: ");

fflush(stdin); // or use: while (getchar() != '\n');

fgets(c.seats, sizeof(c.seats), stdin);

    printf("──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");
    printf("\t\t\t\t╭───────────────────────╮\n");
    printf("\t\t\t\t│   Select the amount   │\n");
    printf("\t\t\t\t╰───────────────────────╯\n\n\n");

   printf("╭────────────────────╮\t╭────────────────────╮\t╭────────────────────╮\n");
         for(int i=0;i<3;i++){
        printf("%s\t",amount[i]);
    }
    printf("\n╰────────────────────╯\t╰────────────────────╯\t╰────────────────────╯\n\n\n");
    printf("\nEnter your amount: ");
    scanf("%d",&c.amount);
    printf("\n\n");
    printf("──────────────────────────────────────────────────────────────────────────────────────────────────────────────────────\n");
    printf("\t\t\t\t╭───────────────────────╮\n");
    printf("\t\t\t\t│   Select the Snacks   │\n");
    printf("\t\t\t\t╰───────────────────────╯\n\n\n");

        printf("╭───────────╮\t╭────────────╮\t╭──────────╮\n");

        for(int i=0;i<3;i++){
        printf("%s\t",snacks[i]);
    }
     printf("\n╰───────────╯\t╰────────────╯\t╰──────────╯\n\n");
    printf("Select the Snacks: ");
    scanf("%s",&c.snacks);
    int snacks_amount=0;
    if(strcmp(c.snacks,"popcorn")==0){
        snacks_amount=100;
    }else if(strcmp(c.snacks,"cocacola")==0){
        snacks_amount=40;
    }else if(strcmp(c.snacks,"puffs")==0){
        snacks_amount=50;
    }
    int ticket_count=strlen(c.seats)/3;
    int ticket_amount=c.amount*ticket_count;
    float cgst =(float)0.09*ticket_amount;
    float sgst =(float)0.09*ticket_amount;
    float total_amount= ticket_amount+cgst+sgst+snacks_amount;
    printf("‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗\n");
    printf("\n\tBook My Show\t\t\t\t\t\t\t     %s             \n",c.theatre);
    printf("      \t\t\t\t\t\t\t\t\t     %s             \n",c.location);
    printf("‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗\n");
    printf(" Customer Name: %s                                                                             \n",c.name);
    printf(" Booking ID: 81297 \t\t\t\t\t\t\t  %s                                                          \n",c.date);
    printf(" Paytm Order ID: 19273456 \t\t\t\t\t\t    %s                                                   \n",c.timings);
    printf(" %s                                                                                            \n",c.movies);
    printf(" %s                                                                                            \n",c.seats);
    printf("                        Ticket Amount : %d                                                     \n",ticket_amount);
    printf("                        Snacks        : %d                                                     \n",snacks_amount);
    printf("                        CGST          : %f                                                     \n",cgst);
    printf("                        SGST          : %f                                                     \n",sgst);
    printf("                      ………………………………………………………………………………                                           \n");
    printf("                        Total Amount  : %f                                                     \n",total_amount);
    printf("                                                                                               \n");
    printf("‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗\n\n");
    printf("╭──────────────────────────────────────────────────────────────────────────────────────────────╮\n");
    printf("│ ⫸ Important Notes:                                                                           │\n");
    printf("│                                                                                              │\n");
    printf("│                                                                                              │\n");
    printf("│ ⫸ Tickets & food once ordered cannot be  exchanged,cancelled or refunded.                    │\n");
    printf("│ ⫸ Children aged 3 years and above will require a separate ticket.                            │\n");
    printf("│ ⫸ Kindly deposit at the baggage counter of mall.                                             │\n");
    printf("│ ⫸ Please check the suitability of the movie as per the Censor Board rating.                  │\n");
    printf("│                                                                                              │\n");
    printf("│ ⨠ U: Unrestricted Public Exhibition throughoutIndia, suitable for all age groups             │\n");
    printf("│ ⨠ A: Viewing restricted to adults above 18 years only                                        │\n");
    printf("│ ⨠ U/A: Unrestricted public exhibition with parental guidance for children below age 12       │\n");
    printf("╰──────────────────────────────────────────────────────────────────────────────────────────────╯\n\n");




FILE *ptr;

ptr=fopen("Movie_ticket_bill.txt","w");
    fprintf(ptr,"‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗\n");
    fprintf(ptr,"\nBook My Show\t\t\t\t%s\n",c.theatre);
    fprintf(ptr,"\t\t\t\t\t%s\n",c.location);
    fprintf(ptr,"‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗\n\n");
    fprintf(ptr," Customer Name : %s\n",c.name);
    fprintf(ptr," Booking ID    : 81297 \t\t    %s\n",c.date);
    fprintf(ptr," Paytm Order ID: 19273456 \t\t   %s\n\n",c.timings);
    fprintf(ptr," %s\n",c.movies);
    fprintf(ptr," %s\n\n",c.seats);

    fprintf(ptr,"\t\tTicket Amount : %d\n",ticket_amount);
    fprintf(ptr,"\t\tSnacks        : %d\n",snacks_amount);
    fprintf(ptr,"\t\tCgst          : %f\n",cgst);
    fprintf(ptr,"\t\tSgst          : %f\n\n",sgst);
    fprintf(ptr,"\t\t ………………………………………………………………………………\n");
    fprintf(ptr,"\t\tTotal Amount    : %f\n\n",total_amount);
    fprintf(ptr,"‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗\n\n");
    fprintf(ptr,"‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗\n\n");
    fprintf(ptr," ⫸ Important Notes:                                                                  \n");
    fprintf(ptr,"                                                                                     \n");
    fprintf(ptr,"                                                                                     \n");
    fprintf(ptr," ⫸ Tickets & food once ordered cannot be  exchanged,cancelled or refunded.           \n");
    fprintf(ptr," ⫸ Children aged 3 years and above will require a separate ticket.                   \n");
    fprintf(ptr," ⫸ Kindly deposit at the baggage counter of mall.                                    \n");
    fprintf(ptr," ⫸ Please check the suitability of the movie as per the Censor Board rating.         \n");
    fprintf(ptr,"                                                                                     \n");
    fprintf(ptr," ⨠ U: Unrestricted Public Exhibition throughoutIndia, suitable for all age group     \n");
    fprintf(ptr," ⨠ A: Viewing restricted to adults above 18 years only                               \n");
    fprintf(ptr," ⨠ U/A: Unrestricted public exhibition with parental guidance for children below age 12\n");
    fprintf(ptr,"‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗‗\n\n");

fclose(ptr);
printf("Bill Generated Success fully\n");

}
