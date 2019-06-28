class Solution {
    int toggle(int x) {
        if(x == 1)
            return 0;
        return 1; 
    }
    
    public int[][] flipAndInvertImage(int[][] A) {
        int B[][] = new int[A.length][A[0].length];
        // flip the array...
        for(int i=0; i<A.length; i++) {
            int count = 0;
            for(int j=A[i].length-1; j>=0; j--) {
                B[i][count++] = A[i][j];
            }
        }
        
        // invert the array...
        for(int i=0; i<A.length; i++) {
            for(int j=0; j<A[i].length; j++) {
                B[i][j] = toggle(B[i][j]);
            }
        }  
        return B;
    }
}