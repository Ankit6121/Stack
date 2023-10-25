import java.util.Stack;

public class StackUsingLinkedList {
    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    static class Stack {
        public Node head;

        public static boolean isEmpty() {
            return head == null;
        }

        public static void push(int data) {
            Node newNode = new Node(data);
            if (isEmpty()) {
                head = newNode;
                return;
            }
            newNode.next = head;
            head = newNode;

        }

        public static int pop(data)
        {
            if(isEmpty())
            {
                return -1;
            }
            int top= head.data;
            head= head.next;
            return top;
        }

        public static int peek() {
            if (isEmpty()) {
                return -1;
            }
            return head.data;
        }

    }

    public static void main(String[] args) {
        Stack s = new Stack();
        s.push(12);
        s.push(23);
        s.push(254);
        s.push(34);
        while (!s.isEmpty()) {
            System.out.println(s.peek());
            s.pop();
        }
    }
}
