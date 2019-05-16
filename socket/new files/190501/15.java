public class a051602{
	//阶乘
	public static long factorial1(long n){
		//终止条件
		if(n == 0 || n == 1){
			return 1;
		}
		//递推公式
		return	factorial1(n - 1) * n;
	}
	public static long factorial2(int n){
		int sum = 1;
		for(;n>=1;n--){
			sum = sum * n;
		}
		return sum;
	}
	
	/**
     * 利用公式
     * e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + ...
     * 计算自然对数的底 e
     * @param n 一共需要计算 n 项
     * @return
     */
	public static double calcE(int n){
		 double e = 0;
		 for(int i = 0;i <= n;i ++){
			 e = e + 1.0/factorial1(i);
		 }
		 return e;
	 }
	 /**
     * 利用公式
     * e = 1 + 1/1! + 1/2! + 1/3! + 1/4! + ...
     * 计算自然对数的底 e
     * @param precision 最后一项的精度 <= precision
     * @return
     */
	public static double calcE(double precision) {
		 double e = 0;
		 int i = 0;
		 while(true){
			 double item = 1.0/factorial1(i++);
			 e = e + item;
			 if(item < precision){
				 break;
			 }
		 }
		 return e;
	 }
	 /**
     * 利用公式
     * Pi / 4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - ...
     * 计算 pi 的值
     * @param n 一共计算 n 项
     * @return
     */
	 public static double calcPi(int n) {
		 double sum = 0;
		 for(int i = 1;i <= n;i ++){
			 int m = 2 * i - 1;
			 if(i % 2 == 1){
			 sum = sum + 1.0/m;
			 }else{
				 sum = sum - 1.0/m;
			 }
		 }
		 return sum * 4;
	 }
	 public static String reverse(String s) {
		 int length = s.length();
         String r = "";
         for(int i = s.length() - 1;i >= 0;i --)
		 {
			 char ch = s.charAt(i);
			 r = r + ch;
		 }
         return r;		 
	 }
	 /**
     * 10 进制转 16 进制，计算公式如下例
     * 1958 转 16 进制
     * 1958 % 16 == 6   1958 / 16 == 122
     * 122 % 16 == 10 也就是 A   122 / 16 == 7
     * 7 < 16
     * 1958 的 16 进制 为 7A6
     * @param n
     * @return
     */
	 public static String decToHex(int dec) {
		 String s = "";
		 while(dec >=16){
			 int r = dec % 16;
			 dec = dec / 16;
			 if(r < 10){
				 s = s + r;
			 }else{
				 s = s + (char)(r - 10 + 'A');
			 }
		 }
		 if(dec != 0){
			 s = s + dec;	
		 }
		return reverse(s);
	 }
	 public static void char_s(String s){
		 System.out.println(s.charAt(0));
	 }
	 public static void char_num(){
		 int num1 = 10;
		 int num2 = 20;
		 System.out.println("结果为"+num1+num2);
		 System.out.println("结果为"+(num1+num2));
	 }
	 public static void compara(){
		 int a = 10;
		 int b = 20;
		 if(a<10&&++b>10){
			 System.out.println(b);
		 }
		 System.out.println(b);
	 }
	public static void main(String[] args){
		//System.out.println(factorial1(3));
		//System.out.println(factorial2(3));
		//System.out.println(calcE(50));
		//double e = calcE(1E-4);	// e = calcE(0.0001);
		//System.out.printf("e = %f%n", e);
		//System.out.println(calcPi(5000));
		//System.out.println(reverse("Hello"));
		//System.out.println(decToHex(1958));
		//char_s("haha");
		//char_num();
		compara();
		
	}
}
