var reduce = function(nums, fn, init) {
    if (!nums.length)
        return init;
    let reduced;
    for (let i = 0; i < nums.length; i++)
    {
        init = fn(init, nums[i]);
    }
    reduced = init;
    return reduced;
};

function sum(num, curr)
{
    return (num + curr * curr);
}

const func = reduce([1,2,3,4], sum, 100);

console.log(func);