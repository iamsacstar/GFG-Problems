/*You live in Geek land. Geek land can be seen as a grid of shape N x M.
There are K enemy at K positions.
Each enemy blocks the row and column to which it belongs.
You have to find the largest continuous area that is not blocked.No two enemies share the same row or the same column.*/


class Solution {
    public static int largestArea(int n,int m,int k,int[][] enemy) {
        // code here
        List<Integer> rows = new ArrayList<>();
        List<Integer> cols = new ArrayList<>();
        
        rows.add(0); cols.add(0);
        
        for (int i=0; i < enemy.length; i++) {
            rows.add(enemy[i][0]);
            cols.add(enemy[i][1]);
        }

        Collections.sort(rows);
        Collections.sort(cols);
        
        rows.add(n + 1);
        cols.add(m + 1);
        
        int maxDistBetweenRows = 0;
        for (int i=1; i < rows.size(); i++) {
            int dist = rows.get(i) - rows.get(i - 1) - 1;
            maxDistBetweenRows = Math.max(maxDistBetweenRows, dist);
        }
        
        int maxDistBetweenCols = 0;
        for (int i=1; i < cols.size(); i++) {
            int dist = cols.get(i) - cols.get(i - 1) - 1;
            maxDistBetweenCols = Math.max(maxDistBetweenCols, dist);
        }
        
        return maxDistBetweenRows * maxDistBetweenCols;
    }
}
