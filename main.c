
//In this program we will make a program that produces the first N nuumbers of the fibonacci sequence
//Marco Leonardo Valencia
// A01412017
//ITESM TAM
//

int main() {
    int n;
    int first = 0;
    int second = 1;
    int next;
    int c;

    //Here we will ask the user to enter how many termns of the fibonacci sequence he wants
    printf("Enter the number of terms\n");
    scanf("%d", &n);

    //here we will print accordingly the terms of the fibonacci sequence
    printf("First %d terms of Fibonacci series are:\n", n);

    for (c = 0; c < n; c++) {
        if (c <= 1)
            next = c;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }

    return 0;

}