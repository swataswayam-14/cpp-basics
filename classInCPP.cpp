#include<iostream>
using namespace std;

const int size = 50;
static int noOfItems;
class items{
    int item[size];
    int count[size];
    float price[size];

    public:
        void getData(void);
        void putData(int, int, float);
        int totalPrice(void);
        int countOfItems(void);
        void initialiseItems(void);
};

int main(){
    items x;
    x.initialiseItems();
    do{
        int choice;
        cout<<"Enter 1 to putData in the format (item code , quantity , price of each)"<<"\n";
        cout<<"Enter 2 to getData"<<"\n";
        cout<<"Enter 3 to get the total price if all items"<<"\n";
        cout<<"Enter 4 to get the total number of items present"<<"\n";
        cout<<"Enter 5 to quit"<<"\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            int itemcodess , countss , pricess;
            cin>>itemcodess>>countss>>pricess;
            x.putData(itemcodess,countss,pricess);
            break;
        case 2:
            x.getData();
            break;
        case 3:
            cout<<"The total price of all items present is : "<<x.totalPrice()<<"\n";
            break;
        case 4:
            cout<<"The total number of items present in the list is "<<x.countOfItems()<<"\n";
            break;
        default:
            break;
        }
    }while(1);
}

void items:: initialiseItems(){
    for(int i=0;i<size;i++){
        count[i] = 0;
        item[i] = 0;
        price[i] = 0;
    }
}
int items::countOfItems(){
    for(int i=0;i<size;i++){
        if(count[i]!=0){
            noOfItems = noOfItems+count[i];
        }
    }
    return noOfItems;
}

void items::putData(int itemCode , int counts , float prices){
    item[itemCode] = itemCode;
    count[counts] = counts;
    price[itemCode] = prices;
}

void items :: getData(){
    cout<<"Enter the item code to see its price";
    int code;
    cin>>code;
    cout<<"The price of the item is: " <<item[code]<<"\n";
    cout<<"The money spent on buying "<<count[code] << "number of the item is :"<<price[code]*count[code]<<"\n";
}
int items::totalPrice(){
    float totPrice = 0;
    for(int i=0;i<size;i++){
        totPrice = totPrice + count[i]*price[i]; 
    }
    return totPrice;
}

