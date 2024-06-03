 //Euclidean theorem
 #include<stdio.h>
 int gcd(int a, int b)
 {
 	if(b==0)
 	return a;
 }
 else{
 	return gcd(b, a%b);
 }
 int main()
 {
 	int x,y;
 	printf("Enter the no to calculate");
 	scanf("%d %d",&x,&y);
 	int result=gcd(x,y);
 	printf("GCD is %d",result);
 	return 0;
 }
 
