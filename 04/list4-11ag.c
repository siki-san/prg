int main(void){
    puts("正の整数値を加算します(収量は-9999)。");

    int sum = 0;
    while (1){/*while(1)は真の値で回す、無限ループ*/
        int no = 0;

        printf("整数値:");
        scanf("%d",&no);
        if(no == -9999){
            break;
        }else if(no <= 0){
            continue; /*加算を行わない*/
            sum += no;
        }

        printf("正の整数の合計は%dです。",sum);

    }

    return 0;
    
}