//WAP to Simple Calculator menu driven
int main() {
int op,a,b,opera;
printf("Enter two Numbers:::");
scanf("%d%d",&a,&b);
printf("\n Enter the operation\t \n add=1\nsubstract=2\nmultiply=3\ndivide=4");
scanf("%d",&op);
    switch (op) {
        case 1:
        opera=a+b;
        printf("\n%d",opera);
        break;
        case 2:
        opera=a-b;
        printf("\n%d",opera);
        break;
        case 3:
        opera=a*b;
        printf("\n%d",opera);
        break;
        case 4:
        opera=a/b;
        printf("\n%d",opera);
        break;
        default:
            printf("\nInvalid Input");
            break;
    }
    return 0;
    }
