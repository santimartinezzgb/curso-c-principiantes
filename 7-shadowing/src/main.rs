fn main() {
    let x = 5;

    // A new variable can shadow a previous one using the same name with let
    let x = x + 1;

    {
        // Shade inside the block
        let x = x * 2;
        println!("The value of x in the inner scope is: {}", x)
    }

    println!("The value of x is: {}", x)
}
