
struct food
{
	char type[10], name[100], topping[100], flavor[100], size;
	int price, cookingTime;
	double calories;
};

struct orders
{
    char type[10], name[100], topping[100], flavor[100], size, orderedtime[100];
    int price, cookingTime;
    double calories;
};

struct orders Orders[100];
struct food Food[MAX];
int n = 1,a = 0,profit = 0;       //TOTAL DESSERTS & DRINKS  (Start from 1)
int order, orderCtr = 0, id = 0;

int strcmpInsensitive(char *topping), cookingTimeDessert(int time), cookingTimeDrink(char flavor[]); //Prototypes
void dessertMenu(), drinkMenu(), sleep(), main_menu();
char *defstring(char *str);
void printTable(), addOrder(), write(); // orderFood's Prototypes
