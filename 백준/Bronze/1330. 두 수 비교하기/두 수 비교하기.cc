#import<ios>

int a, b;
main(){
    scanf("%d %d",&a, &b);
    puts(a > b ? ">" : a < b ? "<" : "==");
}