public class Test {
    public static void main(String[] args) {
        String developer = "DUSK";
        int projectsCompleted = 12;
        
        System.out.println("═══════════════════════════");
        System.out.println("  " + developer + "'s Java Workspace");
        System.out.println("═══════════════════════════\n");
        
        System.out.println("Projects completed: " + projectsCompleted);
        System.out.println("Status: Operational");
        
        String[] stack = {"Backend", "Algorithms", "Systems"};
        System.out.println("\nCore strengths:");
        
        for(int i = 0; i < stack.length; i++) {
            System.out.println("  → " + stack[i]);
        }
        
        System.out.println("\n✓ Java runtime initialized.");
        System.out.println("Keep building, " + developer + ".");
    }
}