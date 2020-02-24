#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct Shop{

    char name[20];
    int id;
    int price;
    int category;
};
struct Inventory{

    char name[20];
    int amount;
};

typedef struct Inventory inventory;

void Inventory(inventory * varInventaire){
        printf("Name : %s\n", (*varInventaire).name);
        printf("Amount : %d\n", (*varInventaire).amount);
}

typedef struct Shop shop;

    void stock(){
        
        shop Sword = {"Sword",1, 20, 1};
        shop Shield = {"Shield",2, 40, 2};
        shop Helmet = {"Helmet",3, 40, 2};
        shop Spear = {"Spear",4, 12, 1};
        shop Arrow = {"Arrow",5, 5, 1};
        shop ChestPlate = {"ChestPlate",6, 35, 2};
        shop Food = {"Food",7, 5, 3};
        shop Water = {"Water",8, 5, 3};
        shop New = {"New", 9, 20, 3};
        

        //Sword :
            printf("Name : %s\n", Sword.name);
            printf("ID : %d\n", Sword.id);
            printf("Price : %d\n", Sword.price);
            printf("Category : %d\n\n", Sword.category);
            
        //Shield :
            printf("Name : %s\n", Shield.name);
            printf("ID : %d\n", Shield.id);
            printf("Price : %d\n", Shield.price);
            printf("Category : %d\n\n", Shield.category);
        
        //Helmet :
            printf("Name : %s\n", Helmet.name);
            printf("ID : %d\n", Helmet.id);
            printf("Price : %d\n", Helmet.price);
            printf("Category : %d\n\n", Helmet.category);
            
        //Spear :
            printf("Name : %s\n", Spear.name);
            printf("ID : %d\n", Spear.id);
            printf("Price : %d\n", Spear.price);
            printf("Category : %d\n\n", Spear.category);

        //Arrow :
            printf("Name : %s\n", Arrow.name);
            printf("ID : %d\n", Arrow.id);
            printf("Price : %d\n", Arrow.price);
            printf("Category : %d\n\n", Arrow.category);

        //ChestPlate :
            printf("Name : %s\n", ChestPlate.name);
            printf("ID : %d\n", ChestPlate.id);
            printf("Price : %d\n", ChestPlate.price);
            printf("Category : %d\n\n", ChestPlate.category);
                
        //Food :
            printf("Name : %s\n", Food.name);
            printf("ID : %d\n", Food.id);
            printf("Price : %d\n", Food.price);
            printf("Category : %d\n\n", Food.category);
        
        //Water :
            printf("Name : %s\n", Water.name);
            printf("ID : %d\n", Water.id);
            printf("Price : %d\n", Water.price);
            printf("Category : %d\n\n", Water.category);
            
        //New :
            printf("Name : %s\n", New.name);
            printf("ID : %d\n", New.id);
            printf("Price : %d\n", New.price);
            printf("Category : %d\n\n", New.category);
            
}
void degats (shop * buy) {
    (*buy).price = (*buy).price;
}



int cstring_cmp(const void *a, const void *b) 
{ 
    const char **ia = (const char **)a;
    const char **ib = (const char **)b;
    return strcmp(*ia, *ib);
} 


/* fonction print tableau */ 
void print_cstring_array(char **array, size_t len) 
{ 
    size_t i;
 
    for(i=0; i<len; i++) 
        printf("%s | ", array[i]);
 
    putchar('\n');
}


void sort_cstrings() 
{ 
    
    
    char *strings[] = { "Sword 20 GP", "Shield 40 GP", "Helmet 40 GP", "Spear 12 GP", "Arrow 5 GP", "Chest Plate 35 GP", "Apple 5 GP", "Bottle of Water 5 GP" };
    size_t strings_len = sizeof(strings) / sizeof(char *);
 
    /** STRING */ 
    puts("*** String sorting...");
 
    /* range grâce à qsort */ 
    qsort(strings, strings_len, sizeof(char *), cstring_cmp);
 
    /* print rangé */ 
    print_cstring_array(strings, strings_len);
    
}

//Heros
int xp = 0;
int niveau = 1;
int lvl = 1;
int gold = 0;

float PV = 0;
int PV_min = 0;

int PM_max = 0;
int PM = 0;

int attk = 0;
int sort = 0;

//Effets
int poisonne_m = 0;
int poisonne_j = 0;
int brule = 0;

//Autre
int tour = 10000;
int aide = 0;
int choix_hero;

//Monstre
float vie_m = 12;
int pm_m = 30;
int choix_m = 0;


typedef struct Hero
{
    int classe;
    float PV;
    int PV_min;
    int PM;
    int PM_max;
    int attk;
    int sort;
} hero;

hero Barbare = {1,30,30,15,15,25,1};
hero Voleur = {2,30,30,25,25,15,2};
hero Mage = {3,20,20,40,40,10,3};
hero Paladin = {4,45,45,20,20,5,4};
hero Archer = {5,25,25,25,25,20,5};


int a = 1;
int b = 4;

int rand_a_b(int a, int b){
    srand (time( NULL ));
    return rand()%(b-a) +a;
}

void base(){ 
    int test = 0;
    int choice = 0;
    int choixJoueur = 0;
    int choix = 0;
    char answer;
    int gold = 10000;
    inventory Sword = {"Sword",0};
    inventory Spear = {"Spear",0};
    inventory Shield = {"Shield",0};
    inventory Helmet = {"Helmet",0};
    inventory Water = {"Bottle of Water",0};
    inventory Food = {"Apple",0};
    inventory Arrow = {"Arrow",0};
    inventory ChestPlate = {"Chest Plate",0};
    for (tour=10000 ; tour>=0 ; tour--){
        int choix_j;
        int choix_m = rand_a_b(1,4);
        int choix_p1 = rand_a_b(1,3);

        if(xp == 100){
            lvl += 1;
            printf("Vous avez passe un niveau\nVous etes niveau %d \n", lvl);
            PV = PV_min*lvl;
            PM += 2*lvl;
            PM_max += 2*lvl;
            xp = 0;
        }
    
        if(PM < PM_max){
            PM += 1;
        }

        if (brule == 1){
            vie_m -= 5;
        }
                
        if (poisonne_m == 1){
            vie_m -= 1;
        }

        if (poisonne_j == 1){
            PV -= 1;
        }           
                
        if (PV <= 0){
            printf("YOU DIED\n");
            break;
        }
                
        if (vie_m <= 0){
            printf("Le monstre est mort\n");
            xp += 25;
            niveau += 1;
            vie_m = 12*niveau;
            pm_m = 30;
            PV = PV_min*lvl;
            PM += 2*lvl;
            PM_max += 2*lvl;
            poisonne_j = 0;
            poisonne_m = 0;
            brule = 0;
            printf("Vous descendez plus bas\nVous entrez au niveau %d \n", niveau);
            printf("Un nouveau monstre apparait avec %f PV\n", vie_m);
    
        }
    
        scanf("%d", &choix_j);
                
        while (PM < 10){
            if (choix_j > 2){
                printf("Vous n'avez plus assez de mana, dans la confusion personne ne fait rien\n");
                printf("Attaquez ou defendez-vous\n");
                scanf("%d", &choix_j);
            }
            else{
                break;
            }
        }


    
        switch(choix_j) {
            case 1 :
                switch(choix_m) {
                    case 1 :
                        vie_m -= attk;
                        
                        printf("Vous attaquez, Monstre perd 1 PV ");
                            
                        if(vie_m>0){
                            printf("Monstre contre-attaque,");
                            
                            if(choix_p1 == 1){
                                printf(" Vous perdez 1 PV\nVous reste %f PV\nVotre allie attaque\n", PV);
                                vie_m -= 5;
                                printf("Monstre perd 5 PV\nIl a encore %f PV\n", vie_m);
                                PV -= 1;
                                printf("Vous reste %f PV\n", PV);
                            }
                        
                            else{
                                PV -= 0.5;
                                printf("Votre allie vous defends\nVous ne prenez que la moitie des degats\n");
                            }
                        }
                    break;
                        
                    case 2 :
                        vie_m -= (attk/4);
                        printf("Vous avez attaque, Monstre perd 1/4 PV, Il a encore %f PV\n", vie_m);
                    break;

                    case 3 : 
                        if (pm_m != 0){
                            printf("Vous avez attaque, Monstre a perdu un PV, Il n'a plus que %f PV\n", vie_m);
                            if(vie_m>0){
                                printf("Monstre lance Poison, Vous prenez 1 dgt/tour\nVous reste %f PV\n", PV);
                                poisonne_j = 1;
                                pm_m -= 10;
                                
                                if(choix_p1 == 1){
                                    vie_m -= 5;
                                    printf("Monstre perd 5 PV\nIl a encore %f PV\n", vie_m);
                                }
                        
                                else{
                                    printf("Votre allie vous defends\n");
                                }                            
                            }
                        }
                    break;
                }

                break;
                
            break;
                
            case 2 :
                switch(choix_m) {
                    case 1 :
                        printf("Vous vous defendez\n");
                        printf("Le Monstre attaque\n");
                        
                        if(choix_p1 == 1){
                            printf("Votre allie attaque\n");
                            vie_m -= 5;
                            printf("Monstre perd 5 PV\nIl a encore %f PV\n", vie_m);
                            PV -= 0.25;
                            printf("Vous reste %f PV\n", PV);
                        }
                        
                        else{
                            printf("Votre allie vous defends\nVous ne prenez pas de degats\n");

                        }

                    break;

                    case 2 :
                        printf("Vous n'avez pas attaque ");           
                        if(vie_m>0){
                            if(choix_p1 == 1){
                                printf("Votre allie attaque\n");
                                vie_m -= 2.5;
                                printf("Monstre perd 5 PV\nIl a encore %f PV\n", vie_m);
                                
                                if(poisonne_m==1){
                                    printf("Monstre a perdu des PV du au poison, Il a encore %f PV\n", vie_m);
                                }
                                        
                                else{
                                    printf("Monstre n'a perdu aucun PV, Il a encore %f PV\n", vie_m);
                                }
                            }
                        
                            else{
                                printf("Votre allie vous defends\n");
                                if(poisonne_m==1){
                                    printf("Monstre a perdu des PV du au poison, Il a encore %f PV\n", vie_m);
                                }
                                        
                                else{
                                    printf("Monstre n'a perdu aucun PV, Il a encore %f PV\n", vie_m);
                                }
                            }

            
                            printf("Monstre se protege, Vous ne perdez aucun PV\nVous reste %f PV\n", PV);
                        }
                    break;
        
                    case 3 : 
                        if(pm_m != 0){
                            printf("Monstre n'a perdu aucun PV, Il a encore %f PV\n", vie_m);
                            printf("Monstre lance Poison, Vous prend 1 dgt/tour\nVous reste %f PV\n", PV);
                            poisonne_j = 1;
                            pm_m -= 10;
                        }
                        if(choix_p1 == 1){
                            printf("Votre allie attaque\n");
                            vie_m -= 5;
                            printf("Monstre perd 5 PV\nIl a encore %f PV\n", vie_m);
                        }
                        
                        else{
                            printf("Votre allie vous defends\nVous ne prenez pas de degats\n");

                    }
                    break;
                }
                break;
                
            break;
    
            case 3 :
                PM -= 5;
                
                switch(choix_m) {   
                    case 1 :

                        printf("Vous lancez Poison, Monstre prend 1 dgt/tour, Il a encore %f PV\n", vie_m);

                        if(vie_m>0){

                            if(choix_p1 == 1){
                                printf("Votre allie attaque\n");
                                vie_m -= 5;
                                printf("Monstre perd 5 PV\nIl a encore %f PV\n", vie_m);
                                PV -= 1;
                                printf("Monstre attaque, Vous ne vous etes pas protege, vous perdez 1 PV\nVous reste %f PV\n", PV);
                                printf("Vous reste %f PV\n", PV);
                            }
                        
                            else{
                                PV -= 0.5;
                                printf("Votre allie vous defends\nVous ne prenez que la moitie des degats\n");

                            }
                        }
                        poisonne_m = 1;
                    
                    break;
                        
                    case 2 :
                        printf("Vous lancez Poison, Monstre prend 1 dgt/tour, Il a encore %f PV\n", vie_m);
                            
                        if(vie_m>0){
                            printf("Monstre se protege, Vous perd 0 PV\nVous reste %f PV\n", PV);
                            if(choix_p1 == 1){
                                printf("Votre allie attaque\n");
                                vie_m -= 2.5;
                                printf("Monstre perd 5 PV\nIl a encore %f PV\n", vie_m);
                            }
                        
                            else{
                                printf("Votre allie vous defends\n");

                            }
                        }
                        poisonne_m = 1;
                    break;
        
                    case 3 : 
                        if (pm_m != 0){
                            printf("Vous lancez Poison, Monstre prend 1 dgt/tour, Il a encore %f PV\n", vie_m);
                                
                            if(vie_m>0){
                                printf("Monstre lance Poison, Vous etes empoisonne \nVous reste %f PV\n", PV);
                                poisonne_j = 1;
                                pm_m -= 10;
                            }
                            
                            if(choix_p1 == 1){
                                printf("Votre allie attaque\n");
                                vie_m -= 5;
                                printf("Monstre perd 5 PV\nIl a encore %f PV\n", vie_m);
                            }
                        
                            else{
                                printf("Votre allie vous defends\n");

                            }    
                            poisonne_m = 1;
                        }
        
                        printf("Vous reste %d PM\n", PM);
                    break;
                }
                break;

            break;
    
            case 4 :
                PM -= 10;
                    
                switch (choix_m) {
                    case 1 :
                        PV -= 1;
                        printf("Vous lancez Antidote, Poison est retire\n");
                            
                        if(vie_m>0){
                            if(choix_p1 == 1){
                                printf("Votre allie attaque\n");
                                vie_m -= 5;
                                printf("Monstre perd 5 PV\nIl a encore %f PV\n", vie_m);
                                PV -= 1;
                                printf("Monstre attaque, Vous ne vous etes pas protege, vous perdez 1 PV\nVous reste %f PV\n", PV);
                                printf("Vous reste %f PV\n", PV);
                            }
                        
                            else{
                                PV -= 0.5;
                                printf("Votre allie vous defends\nVous ne prenez que la moitie des degats\n");

                            }
                        }

                        poisonne_j = 0;
                    break;
                
                    
                    case 2 :
                        printf("Vous lancez Antidote, Poison est retire\n");
                            
                         if(vie_m>0){
                            printf("Monstre se protege, Vous perd 0 PV\nVous reste %f PV\n", PV);
                            if(choix_p1 == 1){
                                printf("Votre allie attaque\n");
                                vie_m -= 2.5;
                                printf("Monstre perd 5 PV\nIl a encore %f PV\n", vie_m);
                            }
                        
                            else{
                                printf("Votre allie vous defends\n");

                            }

                        poisonne_j = 0;
                    break;
                
    
                    case 3 : 
                        if(pm_m != 0){
                            printf("Vous lancez Antidote, Poison est retire\n");
                                
                            if(vie_m>0){
                                printf("Monstre lance Poison, Vous etes empoisonne \nVous reste %f PV\n", PV);
                                poisonne_j = 1;
                                pm_m -= 10;
                            }
                            
                            if(choix_p1 == 1){
                                printf("Votre allie attaque\n");
                                vie_m -= 5;
                                printf("Monstre perd 5 PV\nIl a encore %f PV\n", vie_m);
                            }
                        
                            else{
                                printf("Votre allie vous defends\n");

                            } 
                            poisonne_j = 0;

                        }
                    break;
                }
                break;
    
                printf("Vous reste %d PM\n", PM);
                }
                
            break;

            case 5 :
                switch (sort) {
                    case 1 :
                        PM = 0;
                        vie_m -= 40;
                        printf("Vous entrez dans une rage folle, le monstre perds 40 PV\n");

                    break;

                    case 2 :
                        PM = 0;
                        gold += 75;
                        printf("Vous trouvez une cache avec 75 pieces d'or\n");
                    break;

                    case 3 :
                        PM = 0;
                        vie_m -= 40;
                        brule = 1;
                        printf("Vous lancez une boule de feu, le monstre perds 40 PV et brule\n");
                    break;

                    case 4 :
                        PM = 0;
                        PV += 40;
                        printf("Vous priez les dieux, vous regagnez 40 PV\n");
                    break;

                    case 5 :
                        PM = 0;
                        vie_m -= 40;
                        printf("Vous decochez une fleche vitale, le monstre perds 40 PV\n");
                    break;
                }
            break;

            case 6 :
                printf("WELCOME, Welcome to the Smelly Fox.\nThis is my humble shop.\n");
                printf("So what would you like ? Sell me a new object ? [1]\nBuy one ? [2]\n");
                scanf("%d", &choix);
                
                /*if (choix == 1){
                    printf("So what would you like to sell ?\n");
                    scanf("%s", new.name[]);
                    printf("So what's the price ?\n");
                    scanf("%d", new.price);
                    printf("So what's the category ?\n");
                    scanf("%d", new.category);
                        
                }*/
                    
                if (choix == 2){
                    while(gold>0){
                            printf("Objects in the Shop :\n\n");
                            stock();
                            printf("Inventory : enter 9\n\n");
                            printf("ID of the item you want to buy :\n");
                            scanf("%d", &choixJoueur);
                
                        if (gold <= 0){
                            printf("No more Gold\n");
                        }
                
                        switch(choixJoueur){
                
                                case 1 :
                                    printf("\nDo you want to buy a Sword ?\n[1] OR [0]\n");
                                    while(scanf("%d", &choice) == 1 && choice == 1){
                                        printf("Success!\n");
                                        printf("Gold - 20\n");
                                        gold -= 20;
                                        printf("Your Gold : %d$\n",gold);
                                        Sword.amount ++;
                                    }
                                    
                                break;
                
                                case 2 :
                                    printf("\nDo you want to buy a Shield ?\n[1] OR [0]\n");
                                    while(scanf("%d", &choice) == 1 && choice == 1){
                                        printf("Success!\n");
                                        printf("Gold - 40\n");
                                        gold -= 40;
                                        printf("Your Gold : %d$\n",gold);
                                        Shield.amount ++;
                                    }
                                    
                                break;
                
                                case 3 :
                                    printf("\nDo you want to buy a Helmet ?\n[1] OR [0]\n");
                                    while(scanf("%d", &choice) == 1 && choice == 1){
                                        printf("Success!\n");
                                        printf("Gold - 40\n");
                                        gold -= 40;
                                        printf("Your Gold : %d$\n",gold);
                                        Helmet.amount ++;
                                    }
                                    
                                break;
                
                                case 4 :
                                    printf("\nDo you want to buy a Spear ?\n[1] OR [0]\n");
                                    while(scanf("%d", &choice) == 1 && choice == 1){
                                        printf("Success!\n");
                                        printf("Gold - 12\n");
                                        gold -= 12;
                                        printf("Your Gold : %d$\n",gold);
                                        Spear.amount ++;
                                    }
                                    
                                break;
                
                                case 5 :
                                    printf("\nDo you want to buy a Arrow ?\n[1] OR [0]\n");
                                    while(scanf("%d", &choice) == 1 && choice == 1){
                                        printf("Success!\n");
                                        printf("Gold - 5\n");
                                        gold -= 5;
                                        printf("Your Gold : %d$\n",gold);
                                        Arrow.amount ++;
                                    }
                                    
                                break;
                
                                case 6 :
                                    printf("\nDo you want to buy a Chest Plate ?\n[1] OR [0]\n");
                                    while(scanf("%d", &choice) == 1 && choice == 1){
                                        printf("Success!\n");
                                        printf("Gold - 35\n");
                                        gold -= 35;
                                        printf("Your Gold : %d$\n",gold);
                                        ChestPlate.amount ++;
                                    }
                                    
                                break;
                
                                case 7 :
                                    printf("\nDo you want to buy some Food ?\n[1] OR [0]\n");
                                    while(scanf("%d", &choice) == 1 && choice == 1){
                                        printf("Success!\n");
                                        printf("Gold - 5\n");
                                        gold -= 5; 
                                        printf("Your Gold : %d$\n",gold);
                                        Food.amount ++;
                                    }
                                    
                                break;
                                
                                case 8 :
                                    printf("\nDo you want to buy a Water ?\n[1] OR [0]\n");
                                    while(scanf("%d", &choice) == 1 && choice == 1){
                                        printf("Success!\n");
                                        printf("Gold - 5\n");
                                        gold -= 5;
                                        printf("Your Gold : %d$\n",gold);
                                        Water.amount ++;
                                    }
                                    
                                break;
                                    
                                case 9 :
                                    printf("\nInventory :\n");
                                    Inventory(&Sword);
                                    Inventory(&Shield);
                                    Inventory(&Spear);
                                    Inventory(&Arrow);
                                    Inventory(&ChestPlate);
                                    Inventory(&Food);
                                    Inventory(&Water);
                                    scanf("%d", &test);
                                break;
                        };
                    };
                };
            break;

        }
    }
}

void barbare(){

    //Hero
    xp = 0;
    niveau = 1;
    lvl = 1;
    gold = 0;

    PV = Barbare.PV;
    PV_min = Barbare.PV_min;

    PM_max = Barbare.PM_max;
    PM = Barbare.PM;

    attk = Barbare.attk;
    sort = Barbare.sort;

    base();
}

void voleur(){

    //Hero
    xp = 0;
    niveau = 1;
    lvl = 1;
    gold = 0;

    PV = Voleur.PV;
    PV_min = Voleur.PV_min;

    PM_max = Voleur.PM_max;
    PM = Voleur.PM;

    attk = Voleur.attk;
    sort = Voleur.sort;

    base();
}

void mage(){

    //Hero
    xp = 0;
    niveau = 1;
    lvl = 1;
    gold = 0;

    PV = Mage.PV;
    PV_min = Mage.PV_min;

    PM_max = Mage.PM_max;
    PM = Mage.PM;

    attk = Mage.attk;
    sort = Mage.sort;

    base();
}

void paladin(){

    //Hero
    xp = 0;
    niveau = 1;
    lvl = 1;
    gold = 0;

    PV = Paladin.PV;
    PV_min = Paladin.PV_min;

    PM_max = Paladin.PM_max;
    PM = Paladin.PM;

    attk = Paladin.attk;
    sort = Paladin.sort;

    base();
}

void archer (){

    //Hero
    xp = 0;
    niveau = 1;
    lvl = 1;
    gold = 0;

    PV = Archer.PV;
    PV_min = Archer.PV_min;

    PM_max = Archer.PM_max;
    PM = Archer.PM;

    attk = Archer.attk;
    sort = Archer.sort;

    base();
}

int main(){

    printf("BIENVENUE DANS, le Jeu Dont Vous Etes Le Hero Et Ouais Mec\n\n\nEnfin, un jeu quoi. Ca va vous m'avez compris...\n");



    printf("Choisissez votre classe\n1 pour le Barbare\n2 pour le Voleur\n3 pour le Mage\n4 pour le Paladin\n5 pour le Archer\n");
    scanf("%d", &choix_hero);

    printf("Pour avoir une aide tapez 1, pour jouer directement tapez 2\n");
    scanf("%d", &aide);

    if (aide == 1){
        printf("Pour attaquer tapez '1'\nPour parer tapez '2'\nPour lancer un sort de Poison tapez '3'\nPour lancer un sort d'Antidote tapez '4'\nPour lancer votre aptitude tapez '5'\nPour rentrer dans le magasin tapez '6'\n \n \n \n                           BONNE CHANCE\n");
        aide = 2;
    }
    
    if (aide == 2){
        printf("Vous entrez dans le donjon, un premier monstre apparait\n");
        printf("PV Gobelin: %f \n", vie_m);

        switch(choix_hero){
            case 1 :
                barbare();
                break;

            case 2 :
                voleur();
                break;

            case 3 :
                mage();
                break;

            case 4 :
                paladin();
                break;

            case 5 :
                archer();
                break;
        }
    }
    return 0;
}
