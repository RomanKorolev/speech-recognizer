#ifndef WORD_H_
#define WORD_H_

#include <cstdint>
#include <string>

namespace yazz {
namespace audio {

/**
 * Word is a set of frames that match a word from a dictionary
 */
class Word {

public:
	/**
	 * Create a word based on set of frames
	 */
	Word(uint32_t id);
	~Word();

	/**
	 * Get frame's serial number
	 */
	uint32_t getId() const { return this->id; }

	void setMfcc(double* mfcc, uint32_t size) {
		this->mfcc = mfcc; this->mfccSize = size; }
	double* getMfcc() const { return this->mfcc; }
	uint32_t getMfccSize() const { return this->mfccSize; }

private:
	uint32_t id;

	uint32_t mfccSize;
	double* mfcc;
};

} /* namespace audio */
} /* namespace yazz */

#endif /* WORD_H_ */
