class Node
     {
         constructor(val)
         {
             this.data = val || null;
             this.next = null;
             this.prev = null;
         }
     }
class LinkedList
{
    constructor()
    {
        this.head = null;
        this.tail = null;
        this.size = 0;
    }
    push_back(val)
    {
        var tmp = new Node(val);
        if(this.size === 0)
        {
            this.head = this.tail = tmp;
        }
        else
        {
            this.tail.next = tmp;
            tmp.prev = this.tail;
            this.tail = tmp;
        }
        this.size++;
    }
    pop_back()
    {
        if(this.size === 0)
            throw new Error("Can't delete last element because size of Linked List is NULL.");
        this.tail = this.tail.prev;
        this.tail.next = null;
        this.size--;
    }
    push_front(val)
    {
        var tmp = new Node(val);
        this.size++;
        if(this.size === 0)
        {
            this.head = this.tail = tmp;
        }
        else
        {
            this.head.prev = tmp;
            tmp.next = this.head;
            this.head = tmp;
        }
    }
    pop_front()
    {
        if(this.size === 0)
            throw new Error("Can't delete first element because size of Linked List is NULL.");
        this.head = this.head.next;
        this.head.prev = null;
        this.size--;
    }
    Size()
    {
        return this.size;
    }
    out()
    {
        if(this.size === 0)
            throw new Error("Can't print Lenkid List because it has not element.");
        for(; this.head <= this.tail; this.head = this.head.next)
        {
            console.log(this.head.data);
        }
    }

}
