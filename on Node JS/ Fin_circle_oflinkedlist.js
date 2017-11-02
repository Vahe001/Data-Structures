// this function designed for "spoiled" Singly Linked List
findcircle (val)
{
    if(val === undefined)
        throw new Error("Type of argument of function findcircle is incorect.");
    var a = val.head;
    var b = val.head.next;
    while(b.next !== null)
    {
      a.next = null;
      a = b;
      b = b.next;
    }
    console.log("Circle started from " , b.data , " and to " , a.data);
}
