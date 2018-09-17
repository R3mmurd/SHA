/*
  sha1.H - header of
 
  ============
  SHA-1 in C++
  ============
 
  100% Public Domain.
 
  Original C Code
  -- Steve Reid <steve@edmweb.com>
  Small changes to fit into bglibs
  -- Bruce Guenter <bruce@untroubled.org>
  Translation to simpler C++ Code
  -- Volker Grabsch <vog@notjusthosting.com>
  Adaptation to use Fixed width integer types
  -- Alejandro Mujica <aledrums@gmail.com>
*/
 
# ifndef SHA1_HPP
# define SHA1_HPP

# include <cstdint>
# include <istream>
# include <string>
 
class SHA1
{
public:
  SHA1();
  void update(const std::string &s);
  void update(std::istream &is);
  std::string final();
  static std::string from_file(const std::string &filename);
 
private:
  static const uint32_t DIGEST_INTS = 5;
  static const uint32_t BLOCK_INTS = 16; 
  static const uint32_t BLOCK_BYTES = BLOCK_INTS * 4;
 
  uint32_t digest[DIGEST_INTS];
  std::string buffer;
  uint64_t transforms;
 
  void reset();
  void transform(uint32_t block[BLOCK_BYTES]);
 
  static void buffer_to_block(const std::string & buffer,
			      uint32_t block[BLOCK_BYTES]);
  static void read(std::istream & is, std::string & s, int max);
};
 
std::string sha1(const std::string & string);
 
# endif // SHA1_HPP 
