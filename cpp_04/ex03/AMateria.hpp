/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yulpark <yulpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:31:02 by yulpark           #+#    #+#             */
/*   Updated: 2025/08/11 21:37:45 by yulpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string.h>
#include "ICharacter.hpp"

class AMateria
{
	protected:

	public:
		AMateria(std::string const & type);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;  //interface
		virtual void use(ICharacter& target);
}
