//You are given a piece of JavaScript code that should print all even numbers from 1 to 10, but it
// doesn't work as expected:<br><br>for (let i = 1; i <= 10; i++) {<br> if 
// (i % 2 = 0) {<br> console.log(i)<br> }<br>}<br><br>Find and fix the error, then rewrite the code
//  with good indentation and at least one comment explaining the logic.                 
 

for (let i = 1; i <= 10; i++) {
    // Check if the number is even (remainder when divided by 2 is 0)
    if (i % 2 === 0) {
        console.log(i);
    }
}
