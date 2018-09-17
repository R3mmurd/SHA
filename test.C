# include <iostream>
# include <cassert>

using namespace std;

# include <md5.H>
# include <sha1.H>
# include <sha2.H>

int main()
{
  string empty;
  string grape = "grape";

  assert(sha224(empty) ==
	 "d14a028c2a3a2bc9476102bb288234c415a2b01f828ea62ac5b3e42f");
  assert(sha256(empty) ==
	 "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855");
  assert(sha384(empty) ==
	 "38b060a751ac96384cd9327eb1b1e36a21fdb71114be07434c0cc7bf63f6e1da274edebfe76f65fbd51ad2f14898b95b");
  assert(sha512(empty) ==
	 "cf83e1357eefb8bdf1542850d66d8007d620e4050b5715dc83f4a921d36ce9ce47d0d13c5d85f2b0ff8318d2877eec2f63b931bd47417a81a538327af927da3e");

  assert(md5(grape) == "b781cbb29054db12f88f08c6e161c199");
  assert(sha1(grape) == "bc8a2f8cdedb005b5c787692853709b060db75ff");
  assert(sha224(grape) ==
	 "571f3896fb694dc268b032d7940dabbfbcd7ee64c07f45c01c9e64db");
  assert(sha256(grape) ==
	 "0f78fcc486f5315418fbf095e71c0675ee07d318e5ac4d150050cd8e57966496");
  assert(sha384(grape) ==
	 "c2dafc387656342580027e2dbbbc2afcc77df4294b2542a983cf225735b88821302b9fa3c5948ba48b8dacd43da156d9");
  assert(sha512(grape) ==
	 "9375d1abdb644a01955bccad12e2f5c2bd8a3e226187e548d99c559a99461453b980123746753d07c169c22a5d9cc75cb158f0e8d8c0e713559775b5e1391fc4");
  
  cout << "Everything ok!\n";
  return 0;
}

