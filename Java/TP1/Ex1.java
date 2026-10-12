public class Ex1 {
  public static void main(String[] args) {
    for (int i = args.length - 1; i >= 0; i--) {
      System.out.println(args[i]);
    }
    for (int j = args.length - 1; j >= 0; j--) {
      for (int k = args.length; k >= 0; k--) {
        System.out.println(args[j].charAt(k));
      }
    }
  }
}
