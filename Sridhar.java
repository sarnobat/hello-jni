public class Sridhar
{
    public native void printx();

    static {
	System.out.println(".java :: static :: Loading shared library");
        System.loadLibrary("Sridhar"); // not case sensitive
    }

    public static void main(String[] args) {
	System.out.println(".java :: main() :: Begin");
	Sridhar hw = new Sridhar();
	System.out.println(".java :: main() :: About to call native print() method");
	System.out.println();
	hw.printx();
    }
}
