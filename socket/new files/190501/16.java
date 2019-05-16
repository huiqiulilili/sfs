public class a051601{
	public static void printArray(int[] array){
		for(int item: array){
			System.out.println(item);
		}
	}
	public static void printArray1(int[] array){
		for(int i = 0;i < array.length;i ++){
			System.out.println(array[i]);
		}
	}
	// n 是盘子数
	// src 是源柱子编号
	// dest 是目标柱子编号
	// 柱子 0 1 2
	public static void hannoi(int n, int src, int dest){
		if(n == 1){
			System.out.printf("从%d移到%d%n",src,dest);
		}else{
			int other = 3-src-dest;
			hannoi(n-1,src,other);
			System.out.printf("从%d移到%d%n",src,dest);
			hannoi(n-1,other,dest);
		}
	}
	public static void printArray2(){
	int twoArray[][] = {
				{1,2,3},
				{4,5,6},
				{7,8,9}
			};
			for(int k = 0;k <twoArray.length;k++ )
			{
				for(int j=0;j < 3;j ++)
				{
					System.out.println(twoArray[k][j]);
				}
			}
	
	}
	/*
	计算n的位数
	*/
	public static int calcDigitNum(int n){
		int sum = 0;
		for(int i = n;i>0;i= i / 10)
		{
			sum = sum + 1;
		}
		return sum;
	}
	public static void main(String[] args){
		//printArray(new int[]{1,2,3,4,5});
		//printArray1(new int[]{1,2,3,4,5});
		//printArray2();
		//hannoi(4,0,2);
		System.out.println(calcDigitNum(1234));
	}
}
