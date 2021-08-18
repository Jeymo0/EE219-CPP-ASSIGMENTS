void printBinary(int a){
    //Integer size must be within 2^31-1 integer range (signed type)
int i;

    for (i=31; i>=0; i--){
            // bitwise operator AND
            int j= a>>i;
    if (j&1){
        cout <<"1";

        }
        else if(i%8==0){
                cout<< "0 ";
        }else
            cout <<"0";
    }