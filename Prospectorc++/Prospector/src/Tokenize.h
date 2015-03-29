/*
 * Tokenize.h
 *
 *  Created on: Mar 21, 2015
 *      Author: Jeff
 */

#ifndef TOKENIZE_H_
#define TOKENIZE_H_


	void tokenize(const std::string& str,
		std::vector<std::string>& tokens,
		const std::string& delimiters);

	void tokenize(	std::vector<std::string> &tokens,
					const std::string& str,
					const std::string& delimiters);

class Tokenize {
public:
	Tokenize();
	virtual ~Tokenize();


};

#endif /* TOKENIZE_H_ */
