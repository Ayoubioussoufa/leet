// function sayHello() {
//     console.log("Hello, " + this.name);
//   }
  
//   const person = {
//     name: "John",
//     greet: sayHello
//   };


const person = {
    name: "John",
    greet: function() {
      const innerFunction = () => {
        console.log("Hello, " + this.name);
      };
      innerFunction();
    }
  };  

  person.greet(); // Output: Hello, John
  