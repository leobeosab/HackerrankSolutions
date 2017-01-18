--Simple 'loop' using recursion in haskell

hello_worlds 0 = return()
hello_worlds n = do
    putStrLn("Hello World")
    hello_worlds(n-1)

main = do
   n <- readLn :: IO Int
   hello_worlds n
