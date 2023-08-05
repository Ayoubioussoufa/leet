/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let transformedArray = [];
    for (let i = 0; i < arr.length; i++)
    {
        transformedArray[i] = fn(arr[i], i);
    }
    return transformedArray;
};

function square(num)
{
    return num * num;
}

function consst()
{
    return 42;
}

const func  = map([5,4], consst);

console.log(func);
console.log(func);