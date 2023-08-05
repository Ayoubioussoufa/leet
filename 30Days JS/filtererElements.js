var filter = function(arr, fn) {
    let filteredArray = [];
    for (let i = 0; i < arr.length; i++)
    {
        if (fn(arr[i], i))
            filteredArray.push(arr[i]);
    }
    return filteredArray;
};

/* If the condition fn(arr[i], i) is true, it will add the element to the filteredArray, but if it is false, it will still create an empty slot in the array.
To correct this code, you should use the push() method to add elements to the filteredArray only when the condition is true, avoiding empty slots.*/

function fil(num)
{
    return (num > 10);
}

const func = filter([0,10,20,30], fil);

console.log(func);