class Solution {
    static List<Integer> get(int a, int b) {
        // code here
        List<Integer> list = new ArrayList<>();
        
        list.add(a);
        list.add(b);
        
        Collections.reverse(list);
        
        return list;
    }
}