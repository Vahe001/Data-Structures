class Node
     {
         constructor(data)
         {
             this.data = data || null;
             this.next = null;
         }
     }
class SinglyLinkedList
{
    constructor()
    {
        this.head = null;
        this.size = 0;
    }
    push_front(val)
    {
        var tmp = new Node(val);
        if(this.head === null)
        {
            this.head = tmp;
            return;
        }
        tmp.next = this.head;
        this.head = tmp;
        this.size++;
    }
    pop_front()
    {
        if(this.size === null)
            throw new Error("Can't delete first element because size of Singly Linked List is NULL.")
        var tmp = this.head;
        this.head = this.head.next;
        tmp = null;
    }
    begin()
    {
         return this.head;
    }
    remuve(obj)
    {
        if(obj === undefined || !(obj instanceof SinglyLinkedList))
            throw new Error("Argument of function remuve() is incorect");
        obj.data = (obj.next).data;
        obj.next = (obj.next).next;
    }
    Size()
    {
        return this.size;
    }
    out()
    {
        for(let tmp = this.head; tmp !== null; tmp = tmp.next)
        {
            console.log(tmp.data);
        }
    }
    // this function designed for "spoiled" Singly Linked List
    findcircle ()
    {
        var a = this.head;
        var b = this.head.next;
        while(b.next !== null)
        {
          a.next = null;
          a = b;
          b = b.next;

        }

        console.log("Circle started from " , b.data , " and to " , a.data);
      }

}
