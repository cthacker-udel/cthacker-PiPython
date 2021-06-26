import java.util.Comparator;

public class Dog extends Farm implements Animal, Comparator<Dog>, Comparable<Dog>{

    private int numLegs;
    private String bark;
    private String name;
    private int age;
    private int weight;

    public Dog(){

        this.numLegs = 4;
        this.bark = "Woof!";
        this.name = "Roger";
        this.age = -1;
        this.weight = -1;

    }

    public Dog(String newName){

        this.numLegs = 4;
        this.bark = "Woof!";
        this.name = newName;
        this.age = -1;
        this.weight = -1;

    }

    public Dog(int age, String newName){

        this.numLegs = 4;
        this.name = newName;
        this.bark = "Woof!";
        this.age = age;
        this.weight = -1;

    }

    public void setNumLegs(int newNumLegs){

        this.numLegs = newNumLegs;

    }

    public void setAge(int newAge){

        this.age = newAge;

    }

    @Override
    public void speak() {
        System.out.println(this.bark);
    }

    @Override
    public String getName() {
        return this.name;
    }

    public int getNumLegs(){

        return this.numLegs;

    }

    @Override
    public int getAge() {
        return age;
    }

    @Override
    public int compare(Dog o1, Dog o2) {
        return o1.weight > o2.weight? 1: o1.weight < o2.weight? -1 : 0;
    }

    public int getWeight(){

        return this.weight;

    }

    public void setWeight(int newWeight){

        this.weight = newWeight;

    }

    @Override
    public int compareTo(Dog o) {
        return this.weight > o.weight? 1: this.weight < o.weight? -1 : 0;
    }
    
}
